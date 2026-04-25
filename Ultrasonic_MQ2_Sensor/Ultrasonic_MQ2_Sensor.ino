#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inisialisasi LCD 
LiquidCrystal_I2C lcd(0x27, 16, 2); 

// Deklarasi Pin Sensor
const int trigPin = 9;
const int echoPin = 10;
const int mq2Pin = A0;

// Variabel untuk menyimpan nilai
long duration;
int distance;
int gasValue;

void setup() {
  Serial.begin(9600); // Debugging di Serial Monitor
  
  // Setup Pin Ultrasonik
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Setup LCD
  lcd.init();
  lcd.backlight();
  
  // Opening
  lcd.setCursor(0, 0);
  lcd.print("System Starting");
  lcd.setCursor(0, 1);
  lcd.print("Wait a minute...");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Baca Sensor Ultrasonic
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Rumus jarak dalam cm
  
  // Baca Sensor Gas M!-2
  gasValue = analogRead(mq2Pin); // Nilai dari 0 - 1023
  
  // Tampilan LCD
  lcd.setCursor(0, 0);
  lcd.print("Jarak: ");
  lcd.print(distance);
  lcd.print(" cm    ");
  
  lcd.setCursor(0, 1);
  lcd.print("Asap : ");
  lcd.print(gasValue);
  lcd.print("       "); 

  // Output ke Serial Monitor juga biar gampang ngecek
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.print(" cm | Asap: ");
  Serial.println(gasValue);
  
  delay(500);
}