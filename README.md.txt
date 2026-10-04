# Smart Parking Sensor

A simple Arduino-based parking sensor prototype developed and tested using Tinkercad Circuits.

## Project Description

This project simulates a basic automotive parking assistance system.

An ultrasonic sensor measures the distance between the vehicle and an obstacle. When the detected obstacle is closer than 50 cm, the system activates a red LED and 
a buzzer to warn the driver.

## Components

- Arduino Uno R3
- PING))) Ultrasonic Distance Sensor
- Red LED
- 220 Ω resistor
- Piezo buzzer

## How It Works

The ultrasonic sensor sends a pulse and measures the time required for the signal to return.

The distance is calculated using:

`distance = duration * 0.034 / 2`

The Arduino continuously checks the calculated distance.

- Distance >= 50 cm: LED and buzzer are OFF
- Distance < 50 cm: LED turns ON and buzzer is activated

## Concepts Practiced

Through this project, I practiced:

- Arduino digital input and output
- Ultrasonic distance measurement
- Basic sensor integration
- LED current limiting using a resistor
- Conditional logic
- Serial Monitor
- Basic embedded systems concepts

## Learning Resources

While developing the project, I used an embedded systems book/course material as a learning reference to better understand microcontroller concepts and functions 
used in the program, such as GPIO configuration, digital input/output, timing, and sensor interaction.

The project was implemented and tested by me in Tinkercad as a practical exercise to apply these concepts.

## Technologies

- Arduino Uno
- Embedded C++
- Tinkercad Circuits

## Circuit

The circuit was designed and tested using Tinkercad Circuits.

## Purpose

The purpose of this project was to gain practical experience with basic embedded systems and understand how software can interact with electronic components such as 
sensors, LEDs, and buzzers.