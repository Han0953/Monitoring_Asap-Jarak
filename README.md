🚀 Smart Proximity & Gas Detection System (Arduino Nano)

[![Board: Arduino Nano](https://img.shields.io/badge/Board-Arduino%20Nano-00818A?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Sensors: HC-SR04 & MQ-2](https://img.shields.io/badge/Sensors-Ultrasonic%20%26%20MQ--2-orange?style=for-the-badge)](https://www.arduino.cc/)
[![Status: Functional](https://img.shields.io/badge/Status-Functional-brightgreen?style=for-the-badge)](https://github.com/)

Project ini adalah implementasi sistem monitoring jarak dan kualitas udara (asap/gas) menggunakan mikrokontroler Arduino Nano. Dibuat untuk memenuhi tugas matakuliah **Mikrokontroler dan Mikroprosesor**, sistem ini mengintegrasikan sensor digital dan analog dengan antarmuka LCD I2C.

## 🧐 Kenapa Proyek Ini Ada?
Pekanbaru panasnya nggak ngotak, *jir*! Suhu ekstrem kadang bikin sensor ikutan *overthinking*. Proyek ini hadir sebagai purwarupa sistem keamanan pintar yang mampu mendeteksi keberadaan objek di depan pintu (jarak) sekaligus memantau potensi kebakaran (asap) secara *real-time*.

---

## 🛠️ Komponen yang Digunakan
- **Arduino Nano** (Otak sistem)
- **LCD 16x2 dengan Modul I2C** (Display informasi)
- **Sensor HC-SR04** (Deteksi jarak/ultrasonik)
- **Sensor MQ-2** (Deteksi asap/gas)
- **Breadboard & Kabel Jumper** (Wiring terminal)

---

## 🔌 Skema Wiring (Pin Mapping)

Jangan sampai kebalik atau *auto* konslet! Pastikan wiring mengikuti tabel di bawah ini:

| Komponen | Pin Sensor | Pin Arduino Nano | Keterangan |
| :--- | :--- | :--- | :--- |
| **LCD I2C** | VCC | 5V | Power Rail (+) |
| | GND | GND | Power Rail (-) |
| | SDA | A4 | I2C Data |
| | SCL | A5 | I2C Clock |
| **HC-SR04** | VCC | 5V | Power Rail (+) |
| | GND | GND | Power Rail (-) |
| | Trig | D9 | Output Trigger |
| | Echo | D10 | Input Echo |
| **MQ-2** | VCC | 5V | Power Rail (+) |
| | GND | GND | Power Rail (-) |
| | A0 | A0 | Analog Data Out |
