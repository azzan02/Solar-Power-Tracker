# Solar Power Tracker with PID Control

## Project Overview
This project implements a solar power tracker to maximize solar panel efficiency by dynamically adjusting its orientation throughout the day. The system is built using Light Dependent Resistors (LDRs), an Arduino Uno microcontroller, servo motors, and a PID controller algorithm. By maintaining optimal alignment with the sun, the tracker significantly enhances solar energy harvesting, contributing to sustainable energy solutions.

## Features
  - **Real-time solar tracking:** Uses LDR sensors to detect sunlight intensity in two directions.
  - **PID Controller Implementation:** Optimized in MATLAB to adjust the solar panel position effectively.
  - **Simulation and Validation:** Circuit simulated in Proteus; PID parameters tuned in MATLAB.
  - **Hardware Integration:** Arduino-controlled servo motors adjust the solar panel orientation.

## Project Components
### 1. Hardwaare:
  - Arduino Uno
  - 2 SG90 servo motors
  - 2 Light Dependent Resistors(LDRs)
  - Solar Panel
  - Breadboard and supporiting components

### 2. Software:
  - Proteus for circuit simulation
  - MATLAB for PID tuning
  - Arduino IDE for coding

## Project Design
### 1. Simulation and PID tuning
  - Circuit simulation in Proteus demonstrated expected servo motor responses to LDR changes.
  - MATLAB's PID tuner was used to determine optimal values for the proportional, integral, and derivative gains (Kp, Ki, Kd).

### 2. Arduino Code
The Arduino sketch implements a PID controller to adjust servo motor positions based on the error between LDR readings.

### 3. Hardware Assembly
  - Two LDRs placed on either side of the solar panel detect sunlight direction.
  - Servo motors rotate the panel to maintain alignment with the sun.
  - Arduino regulates servo angles using the tuned PID controller.

### Graphical Results
Experimental results demonstrated higher power output with solar tracking compared to static panels, especially during variable sunlight angles.

## Getting Started
### Prerequisites
  - **Hardware:** Arduino Uno, SG90 servo motors, LDRs, and a solar panel.
  - **Software:** Arduino IDE, MATLAB, Proteus.

### Setup Instructions
1. Clone this repository:
   ```
   git clone https://github.com/azzan02/solar-tracker-pid.git
   ```
2. Upload the Arduino code (main.cpp) to your Arduino Uno.
3. Assemble the circuit as described in the project documentation.
4. Run simulations in Proteus and MATLAB for validation if needed.

## Results
  - Improved solar energy harvesting efficiency compared to static panels.
  - Robust tracking performance validated through simulations and real-world experiments.


## Conclusion
This project demonstrates the effectiveness of a PID-controlled solar tracker in enhancing solar panel efficiency. By combining simulations, hardware integration, and robust control mechanisms, it highlights the potential of renewable energy optimization.

## References
  - [PID Control - Arduino Reference](https://www.arduino.cc/reference/en/libraries/pid/)
  - [Design and Implementation of Sun Tracking Solar Panel Using Microcontroller](https://www.researchgate.net/publication/364316101_Design_and_Implementation_of_Sun_Tracking_Solar_Panel_Using_Microcontroller)
  - [SG90 Servo Characterization](https://www.researchgate.net/publication/353754375_SG90_Servo_Characterization)


