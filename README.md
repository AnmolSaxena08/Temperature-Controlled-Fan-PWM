# Temperature-Controlled-Fan-PWM
Automated cooling system using Arduino Uno that dynamically adjusts DC fan speed via PWM based on real-time temperature sensing.

To complete your **Temperature-Controlled Fan** project with the same professional rigor as your Voltage Sag project, use the following structured **README.md** and **Technical Specifications Sheet**.

### 📄 Final README.md Content
[cite_start]Copy this directly into your repository to act as a professional visual technical report[cite: 310, 314].

# 🌡️ Temperature-Based Fan Speed Controller with LCD Telemetry

## 1. Project Overview
[cite_start]This project implements an automated, **closed-loop thermal management system** using an Arduino Uno[cite: 429]. [cite_start]The system is designed to dynamically regulate the rotational speed of a DC cooling fan based on real-time ambient temperature data sampled at **1 Hz**[cite: 430, 454]. [cite_start]It utilizes **Pulse Width Modulation (PWM)** for high-efficiency speed transitions and includes a **16x2 LCD** for live telemetry[cite: 431, 457].

## 2. Technical Specifications Sheet
| Category | Component / Parameter | Specification / Detail |
| :--- | :--- | :--- |
| **Microcontroller** | Arduino Uno | [cite_start]ATmega328P [cite: 450] |
| **Temperature Sensor** | LM35 / TMP36 | [cite_start]Precision Analog Sensing (±0.5°C accuracy) [cite: 451] |
| **Display Interface** | 16x2 Parallel LCD | [cite_start]Hitachi HD44780 compatible [cite: 452] |
| **Actuator** | DC Cooling Fan | [cite_start]12V operation via Relay/MOSFET [cite: 453] |
| **Control Logic** | PWM & Thresholding | [cite_start]Closed-loop proportional control [cite: 454] |

## 3. System Architecture & Visuals
To provide immediate technical context, the hardware integration is documented below:

### 🔹 Hardware Integration
![System Setup](visuals/WhatsApp_Image_2026-04-28.jpeg)  
[cite_start]*Figure 1: Integrated hardware assembly showing Arduino, sensor interface, and fan module[cite: 393].*

## 4. Working Principle (Technical Logic)
1.  [cite_start]**Data Acquisition:** The system samples analog voltage signals from the sensor, converting them into a calibrated Celsius scale[cite: 438, 455].
2.  [cite_start]**Logic Processing:** If the detected temperature exceeds a pre-set threshold (e.g., 30°C), the Arduino activates the fan via a relay or modulates the PWM duty cycle for variable speed control[cite: 439, 456].
3.  [cite_start]**Telemetry Interface:** The 16x2 LCD provides continuous user feedback, displaying live thermal data and active fan status[cite: 440, 457].

## 5. Repository Structure
[cite_start]To maintain industrial documentation standards, this repository is organized as follows[cite: 458]:
* [cite_start]**/code**: `fan_controller_lcd.ino` (Logic for sensing, LCD driving, and PWM)[cite: 458].
* [cite_start]**/schematics**: Circuit wiring diagrams and a detailed Bill of Materials (BOM)[cite: 459].
* [cite_start]**/visuals**: High-resolution project photos and demonstration video[cite: 460].

---
[cite_start]**License:** This project is released under the **MIT License**[cite: 444].

### 🛠️ Final Steps for your Repository
1.  [cite_start]**Description Box:** Copy this into your GitHub "About" section: *Closed-loop thermal management system using Arduino Uno for dynamic DC fan regulation via PWM, featuring real-time telemetry on a 16x2 LCD interface.*[cite: 427].
2.  [cite_start]**Skills Tags:** Add these topics to make your repo discoverable: `#arduino #embedded-c #control-systems #circuit-design #hardware-prototyping #thermal-management`[cite: 461].
