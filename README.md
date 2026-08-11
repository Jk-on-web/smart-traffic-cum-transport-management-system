<div align="center">

#  URBANFLOW
### Smart Transportation and Traffic Monitoring System

> 🏆 **Rashtriya Bal Vaiganik Pradarshani Entry (2025–26)**[cite: 2]  
> **NVS National Level Exhibition — PM SHRI Jawahar Navodaya Vidyalaya, Kollam (Hyderabad Region)**[cite: 2]

An integrated, multi-controller IoT infrastructure project designed to eliminate emergency vehicle delays, automate traffic signal timing, prevent road overload damage, monitor urban air quality, and conserve municipal lighting energy[cite: 2].

---

</div>

##  Project Overview

**UrbanFlow** addresses the growing mobility and safety challenges in rapidly urbanizing cities[cite: 2]. Built around a modular architecture using 5 parallel Arduino Uno microcontrollers[cite: 2], the system automates core traffic management functions in real time, reducing manual intervention and creating a responsive network for future smart cities[cite: 2].

The system combines **5 core infrastructure modules** into a unified urban grid[cite: 2]:
1. **Density-Based Traffic Control:** Dynamic signal timing adjustments based on real-time vehicle counts[cite: 2].
2. **Emergency Vehicle Prioritization:** Wireless RF override that halts normal traffic and opens a dedicated green lane for emergency transit[cite: 2].
3. **Overloaded Vehicle Toll Detection:** Load cell strain measurement paired with a Processing IDE GUI to flag overweight vehicles[cite: 2].
4. **Smart Streetlight Automation:** Ambient light detection and vehicle-triggered dynamic dimming/brightening[cite: 2].
5. **Environmental Air Telemetry:** Real-time gas sensing ($\text{CO}_2$, $\text{NH}_3$, $\text{NO}_x$) displayed on a central 16x2 LCD screen[cite: 2].

---

##  Subsystem Specifications & Architecture

### 1.  Traffic Density Control & Emergency Priority Lane
* **Vehicle Density Measurement:** Ultrasonic sensors mounted at intersection lanes measure waiting vehicle queues and dynamically extend green light durations for heavily congested routes[cite: 2].
* **Wireless RF Priority Override:** A 433 MHz RF transmitter inside emergency vehicles dispatches a priority signal on approach[cite: 2]. The intersection's RF receiver overrides normal signal loops, halts standard lanes with red lights, activates a green emergency lane LED, sounds a warning buzzer, and displays `"EMERGENCY LANE OPEN - RED LIGHT"` on the LCD screen[cite: 2].

### 2.  Overloaded Vehicle Detection at Toll Gates
* **Strain Gauge Weighing Platform:** Integrates a strain load cell connected to an HX711 weight amplifier module embedded at toll entry points[cite: 2].
* **Real-Time GUI Alerting:** The Arduino reads the amplified digital weight data and streams telemetry via serial connection to a desktop GUI built in Processing IDE, instantly flagging rule-violating vehicles[cite: 2].

### 3.  Smart Streetlight Dynamic Dimming
* **Day/Night Sensing:** A Light Dependent Resistor (LDR) monitors ambient light conditions to activate the lighting grid only during nighttime or overcast periods[cite: 2].
* **Presence-Based Brightness:** Roadside ultrasonic sensors detect approaching traffic, triggering nearby streetlight LEDs to switch to 100% brightness[cite: 2]. Once the vehicle passes, lights automatically drop back to dim mode to conserve municipal power[cite: 2].

### 4.  Environmental Air Quality Monitoring
* **Gas Telemetry:** An MQ-135 semiconductor gas sensor continuously samples ambient air for harmful pollutant concentrations, including $\text{CO}_2$, $\text{NH}_3$, and $\text{NO}_x$[cite: 2].
* **Classification Readout:** Processes gas concentration levels and classifies ambient air quality into `Fresh`, `Moderate`, or `Polluted` statuses, displayed live on a 16x2 I2C LCD screen[cite: 2].

---

##  Scientific Principles Applied

| System | Scientific Principle | Practical Application |
| :--- | :--- | :--- |
| **Emergency Priority** | *Radio Frequency (RF) Propagation*[cite: 2] | 433 MHz electromagnetic signal transmission for priority lane activation[cite: 2]. |
| **Density & Dimming** | *Ultrasonic Echolocation*[cite: 2] | High-frequency sound wave reflection for vehicle distance and motion tracking[cite: 2]. |
| **Streetlight Control** | *Photoresistance*[cite: 2] | Semiconductor resistance shifts corresponding to ambient lux levels[cite: 2]. |
| **Overload Detection** | *Strain Gauge & Wheatstone Bridge*[cite: 2] | Resistance changes under physical deformation amplified via HX711[cite: 2]. |
| **Air Pollution Sensing** | *Gas Adsorption Conductivity Shift*[cite: 2] | Surface conductivity shifts in MQ-135 semiconductor upon gas contact[cite: 2]. |
| **Core Automation** | *Embedded Microcontroller Systems*[cite: 2] | Real-time sensor processing and multi-unit coordination via Arduino Uno[cite: 2]. |

---

##  Complete Bill of Materials (BOM)

| Component Name | Quantity | Function |
| :--- | :---: | :--- |
| **Arduino Uno Microcontroller** | 5[cite: 2] | Parallel processing nodes for individual modules[cite: 2] |
| **RF Wireless Module (433 MHz)** | 1 Transmitter / 1 Receiver[cite: 2] | Wireless emergency signal dispatching[cite: 2] |
| **Load Cell + HX711 Amplifier** | 1[cite: 2] | Vehicle weight strain measurement[cite: 2] |
| **Ultrasonic Sensors (HC-SR04)** | Multiple[cite: 2] | Vehicle queue density & streetlight presence detection[cite: 2] |
| **Light Dependent Resistor (LDR)** | 1[cite: 2] | Ambient day/night light level sensing[cite: 2] |
| **MQ-135 Air Quality Sensor** | 1[cite: 2] | Pollution gas monitoring ($\text{CO}_2$, $\text{NH}_3$, $\text{NO}_x$)[cite: 2] |
| **LCD Display (16x2 I2C)** | 1[cite: 2] | Real-time system feedback and alert readouts[cite: 2] |
| **Signal LEDs (Red, Yellow, Green)** | Multiple[cite: 2] | Traffic signal and streetlight illumination simulation[cite: 2] |
| **Buzzer & Passive Components** | 1 + Misc[cite: 2] | Audio emergency warnings, current limiting, and prototyping[cite: 2] |

---

## 📄 Official Exhibition Documents & Source Code

* 📄 **[View Full Technical Write-Up (PDF)](./Smart_Traffic_System_Writeup.pdf)**[cite: 2]
* 🏆 **[View Official National Exhibition Certificate](./NVS_National_Certificate_2.pdf)**[cite: 1]
* 💻 **[RF Transmitter Code (Ambulance Unit)](./src/rf_transmitter_ambulance.ino)**[cite: 2]
* 💻 **[RF Receiver Code (Traffic Signal Unit)](./src/rf_receiver_traffic_light.ino)**[cite: 2]

---

##  Credits & Acknowledgments

* **Developer:** Master Jayakrishnan S (Class XII Science, PM SHRI JNV Kollam)[cite: 2]
* **Project Guide:** Mr. Satheesh B Kumar (PGT Physics, JNV Kollam)[cite: 2]
* **Institution:** PM SHRI Jawahar Navodaya Vidyalaya, Kollam (Principal Preetha J & Faculty)[cite: 2]