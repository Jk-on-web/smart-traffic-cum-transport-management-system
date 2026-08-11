<div align="center">

#  URBANFLOW
### Smart Transportation and Traffic Monitoring System

> 🏆 **Regional and Cluster first prize (2025–26)**  
> **NVS National Level Exhibition — PM SHRI Jawahar Navodaya Vidyalaya, Kollam (Hyderabad Region)**

An integrated, multi-controller IoT infrastructure project designed to eliminate emergency vehicle delays, automate traffic signal timing, prevent road overload damage, monitor urban air quality, and conserve municipal lighting energy.

---

</div>

##  Project Overview

**UrbanFlow** addresses the growing mobility and safety challenges in rapidly urbanizing cities. Built around a modular architecture using 5 parallel Arduino Uno microcontrollers, the system automates core traffic management functions in real time, reducing manual intervention and creating a responsive network for future smart cities.

The system combines **5 core infrastructure modules** into a unified urban grid:
1. **Density-Based Traffic Control:** Dynamic signal timing adjustments based on real-time vehicle counts.
2. **Emergency Vehicle Prioritization:** Wireless RF override that halts normal traffic and opens a dedicated green lane for emergency transit.
3. **Overloaded Vehicle Toll Detection:** Load cell strain measurement paired with a Processing IDE GUI to flag overweight vehicles.
4. **Smart Streetlight Automation:** Ambient light detection and vehicle-triggered dynamic dimming/brightening.
5. **Environmental Air Telemetry:** Real-time gas sensing ($\text{CO}_2$, $\text{NH}_3$, $\text{NO}_x$) displayed on a central 16x2 LCD screen.

---

##  Subsystem Specifications & Architecture

### 1.  Traffic Density Control & Emergency Priority Lane
* **Vehicle Density Measurement:** Ultrasonic sensors mounted at intersection lanes measure waiting vehicle queues and dynamically extend green light durations for heavily congested routes.
* **Wireless RF Priority Override:** A 433 MHz RF transmitter inside emergency vehicles dispatches a priority signal on approach. The intersection's RF receiver overrides normal signal loops, halts standard lanes with red lights, activates a green emergency lane LED, sounds a warning buzzer, and displays `"EMERGENCY LANE OPEN - RED LIGHT"` on the LCD screen.

### 2.  Overloaded Vehicle Detection at Toll Gates
* **Strain Gauge Weighing Platform:** Integrates a strain load cell connected to an HX711 weight amplifier module embedded at toll entry points.
* **Real-Time GUI Alerting:** The Arduino reads the amplified digital weight data and streams telemetry via serial connection to a desktop GUI built in Processing IDE, instantly flagging rule-violating vehicles.

### 3.  Smart Streetlight Dynamic Dimming
* **Day/Night Sensing:** A Light Dependent Resistor (LDR) monitors ambient light conditions to activate the lighting grid only during nighttime or overcast periods.
* **Presence-Based Brightness:** Roadside ultrasonic sensors detect approaching traffic, triggering nearby streetlight LEDs to switch to 100% brightness. Once the vehicle passes, lights automatically drop back to dim mode to conserve municipal power.

### 4.  Environmental Air Quality Monitoring
* **Gas Telemetry:** An MQ-135 semiconductor gas sensor continuously samples ambient air for harmful pollutant concentrations, including $\text{CO}_2$, $\text{NH}_3$, and $\text{NO}_x$.
* **Classification Readout:** Processes gas concentration levels and classifies ambient air quality into `Fresh`, `Moderate`, or `Polluted` statuses, displayed live on a 16x2 I2C LCD screen.

---

##  Scientific Principles Applied

| System | Scientific Principle | Practical Application |
| :--- | :--- | :--- |
| **Emergency Priority** | *Radio Frequency (RF) Propagation* | 433 MHz electromagnetic signal transmission for priority lane activation. |
| **Density & Dimming** | *Ultrasonic Echolocation* | High-frequency sound wave reflection for vehicle distance and motion tracking. |
| **Streetlight Control** | *Photoresistance* | Semiconductor resistance shifts corresponding to ambient lux levels. |
| **Overload Detection** | *Strain Gauge & Wheatstone Bridge* | Resistance changes under physical deformation amplified via HX711. |
| **Air Pollution Sensing** | *Gas Adsorption Conductivity Shift* | Surface conductivity shifts in MQ-135 semiconductor upon gas contact. |
| **Core Automation** | *Embedded Microcontroller Systems* | Real-time sensor processing and multi-unit coordination via Arduino Uno. |

---

##  Complete Bill of Materials (BOM)

| Component Name | Quantity | Function |
| :--- | :---: | :--- |
| **Arduino Uno Microcontroller** | 5 | Parallel processing nodes for individual modules |
| **RF Wireless Module (433 MHz)** | 1 Transmitter / 1 Receiver | Wireless emergency signal dispatching |
| **Load Cell + HX711 Amplifier** | 1 | Vehicle weight strain measurement |
| **Ultrasonic Sensors (HC-SR04)** | Multiple | Vehicle queue density & streetlight presence detection |
| **Light Dependent Resistor (LDR)** | 1 | Ambient day/night light level sensing |
| **MQ-135 Air Quality Sensor** | 1 | Pollution gas monitoring ($\text{CO}_2$, $\text{NH}_3$, $\text{NO}_x$) |
| **LCD Display (16x2 I2C)** | 1 | Real-time system feedback and alert readouts |
| **Signal LEDs (Red, Yellow, Green)** | Multiple | Traffic signal and streetlight illumination simulation |
| **Buzzer & Passive Components** | 1 + Misc | Audio emergency warnings, current limiting, and prototyping |

---

## 📄 Official Exhibition Documents & Source Code

* 📄 **[View Full Technical Write-Up (PDF)](./Smart_Traffic_System_Writeup.pdf)**
* 🏆 **[View Official National Exhibition Certificate](./NVS_National_Certificate_2.pdf)**[cite: 1]
* 💻 **[RF Transmitter Code (Ambulance Unit)](./transmit1/transmit1.ino)**
* 💻 **[RF Receiver Code (Traffic Signal Unit)](./receive/receive.ino)**

---

---

## 🎥 Live Demonstration & System Explanation

Watch the full hardware demonstration and system walkthrough presented live by **Jayakrishnan S**:

<div align="center">
  <a href="https://drive.google.com/file/d/1Lp6x3fym5R8gUyPqTqTYOi8-sTnOHGm-/view?usp=sharing" target="_blank">
    <img src="./DSC05878.JPG" alt="Watch UrbanFlow Demo" width="600"/>
    <p><b>▶️ Click here to watch the full project demonstration on Google Drive</b></p>
  </a>
</div>

---

##  Credits & Acknowledgments

* **Developer:** Master Jayakrishnan S (Class XII Science, PM SHRI JNV Kollam)
* **Project Guide:** Mr. Satheesh B Kumar (PGT Physics, JNV Kollam)
* **Institution:** PM SHRI Jawahar Navodaya Vidyalaya, Kollam (Principal Preetha J & Faculty)