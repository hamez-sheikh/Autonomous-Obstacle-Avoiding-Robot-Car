# Autonomous Obstacle-Avoiding Robot Car

## Overview
This project is an Arduino-based autonomous robot designed to detect and avoid obstacles using an ultrasonic distance sensor. The robot continuously scans the distance in front of it and automatically adjusts the movement of its wheels to prevent collisions. The goal of this project was to combine mechanical design, sensor integration, and embedded programming to create a simple autonomous navigation system.

---

## Robot Photo
<img src="Autonomous Robot Car Picture.PNG" width="500">

---

## Demo Video
Watch the robot detecting and avoiding obstacles in real time.
<video src="Autonomous Robot Car Demo.mp4" width="500" controls></video>

---

## Features
- Real-time obstacle detection using an ultrasonic sensor
- Autonomous navigation without manual control
- Continuous rotation servo control for wheel movement
- Embedded decision logic for obstacle avoidance
- Fully Arduino-powered system

---

## Wiring Diagram
<img src="Wiring Circuit.PNG" width="500">

The wiring diagram shows how the Arduino Uno connects to the ultrasonic sensor and the continuous rotation servos. The ultrasonic sensor provides distance measurements, while the servos control the movement of the robot's wheels.

---

## Components
- Arduino Uno  
- HC-SR04 Ultrasonic Sensor  
- Continuous Rotation Servos (x2)  
- Breadboard  
- Jumper Wires  
- Robot Chassis  
- Battery Pack  

---

## How It Works
The ultrasonic sensor continuously measures the distance to objects in front of the robot. The Arduino processes this data and compares it to a predefined distance threshold. When an obstacle is detected within that range, the robot stops moving forward and adjusts the rotation direction of the servos to turn away from the obstacle. Once a clear path is detected, the robot resumes forward movement.

---

## Code
The robot is programmed using Arduino C++ and uses the Servo library to control the continuous rotation servos and trigger logic for obstacle detection.

Main logic steps:
1. Trigger ultrasonic sensor to measure distance
2. Read distance value from sensor
3. Compare distance to obstacle threshold
4. If obstacle detected → stop and turn
5. If path clear → continue moving forward
