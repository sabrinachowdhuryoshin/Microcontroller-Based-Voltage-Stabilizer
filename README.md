# Microcontroller Based Voltage Stabilizer
Voltage stabilizers are nowadays one of the most important requirements for all equipment. This project deals with alternative control techniques for load voltage stabilization. The technique of tap-changing transformer switched by a relay module in a coupled circuit is used. A microcontroller is used to control the switches to stabilize the load voltage against supply voltage and load current variation. Boosting or bucking effect is performed at low distortion to drive the relay module. The controlled stabilizer can reduce the supply voltage distortion and adjust the load voltage within a very short time. The technical report of this project is available at my [ResearchGate](https://www.researchgate.net/publication/318654258_Microcontroller_Based_Voltage_Stabilizer). The hardware testing video is available at my [Youtube](https://www.youtube.com/watch?v=p4Uw0DTCDqE&list=PLjNoIGauJyXgEuwqo5jd31XItulT7CI-5&index=5).

---
## Table of Contents
- [Getting Started](#getting-started)
- [Specifications of Components](#specifications-of-components)
- [Circuit Diagram](#circuit-diagram)
- [Electrical Testing Results](#electrical-testing-results)
   - [Arduino Sampling Values](#arduino-sampling-values)
   - [Tap Changing Transformer Output](#tap-changing-transformer-output)
     - [Tap-01](#tap-01) 
     - [Tap-02](#tap-01) 
     - [Tap-03](#tap-01) 
     - [Tap-04](#tap-01) 
     - [Tap-05](#tap-01) 
     - [Tap-06](#tap-01) 
     - [Tap-07](#tap-01) 

   - [Summary of Results](#summary-of-results)
- [Arduino Code](#arduino-code)
   - [Voltage Sampling Code](#voltage-sampling-code)
   - [Final Code](#final-code)
- [Hardware Pictures](#hardware-pictures)
   - [Voltage Sampling Circuit](#voltage-sampling-circuit)
   - [Wiring of the Transformer](#wiring-of-the-transformer)
   - [Wiring of the Relay Module](#wiring-of-the-relay-module)
   - [Final Hardware](#final-hardware)
  

___
## Getting Started
This project analyses a different stabilizing topology and a different design based on tapping the relay for different supply voltages. The purpose is to achieve a nearly 220V value for each variation of supply to drive the load risk freely, thus stabilizing the output voltage. 

The **process chart** is as follows: 

![Microcontroller-Based-Voltage-Stabilizer](./images/Picture1.png)