[Schema_electrique_carte_de_controle.pdf](https://github.com/user-attachments/files/30188662/Schema_electrique_carte_de_controle.pdf)
<img width="2339" height="1653" alt="Diagramme de Block-1" src="https://github.com/user-attachments/assets/fd31f5b3-9347-4c4b-bc5b-74e0fd84f8cc" />
[Diagramme de Block.pdf](https://github.com/user-attachments/files/30188402/Diagramme.de.Block.pdf)

# Hydroponics Control and Monitoring Research Platform

## Project Overview

This project is an experimental hydroponics automation platform developed to study how electronic sensing, repeatable nutrient dosing and centralized supervision can improve the operation of a small hydroponic system.

The platform combines **pH and electrical-conductivity measurement**, four independent dosing pumps, water circulation, lighting control, data logging and a browser-based human-machine interface.

Its main objective is to create a modular test platform that can evolve from manual remote control toward reliable closed-loop regulation. The system is intended to support experimentation with nutrient management, irrigation schedules, sensor calibration and long-duration crop monitoring.

The project also serves as a practical electronics, embedded-software and automation development platform.

## Project Objectives

* Continuously monitor the pH and electrical conductivity of the nutrient solution.
* Control four independent dosing pumps with repeatable activation times.
* Track the accumulated operating time of each dosing pump.
* Control the main circulation pump and two lighting outputs.
* Centralize commands, measurements and equipment status on a computer.
* Display live and historical data through a local web interface.
* Develop calibration procedures for sensors and dosing pumps.
* Record system behaviour during complete crop cycles.
* Evaluate the reliability of automated nutrient and irrigation management.
* Establish the foundation for future closed-loop pH and nutrient regulation.

<img width="4624" height="3472" alt="PXL_20260508_174301336" src="https://github.com/user-attachments/assets/765158bf-b524-4a38-bf2c-2bcc9519690a" />

<img width="4624" height="3472" alt="PXL_20260620_145852862" src="https://github.com/user-attachments/assets/0e6c28e1-ea25-4f52-a02e-fa6eec5dd8d7" />

<img width="3472" height="4624" alt="PXL_20260621_202005503" src="https://github.com/user-attachments/assets/23a80b96-86de-4a69-afc7-f357d509e275" />

---

## System Architecture

The platform is divided into several cooperating subsystems:

* A 100L solution reservoir.
* A main submersible water pump.
* A water circulation circuit for irrigation.
* pH and electrical-conductivity sensors.
* Four nutrient and pH dosing pumps.
* Two independently controlled lighting outputs.
* A wifi-enabled custom micro-controller platform.
* A remote computer running the supervisory software.
* A browser-based monitoring and control interface.
* Local data storage and historical visualization.

The ESP32 is responsible for direct interaction with the physical hardware. It reads the sensors, activates the pumps and controls the circulation and lighting outputs.

A separate computer performs the higher-level supervisory functions. It communicates with the ESP32 over the local network, records measurements and provides the user interface.

This separation keeps time-sensitive hardware control close to the equipment while allowing the interface, data processing and automation logic to evolve independently.

<!-- Add the complete hydroponics system block diagram here. -->
<img width="2339" height="1653" alt="Diagramme de Block-1" src="https://github.com/user-attachments/assets/fd31f5b3-9347-4c4b-bc5b-74e0fd84f8cc" />
[Diagramme de Block.pdf](https://github.com/user-attachments/files/30188402/Diagramme.de.Block.pdf)


---

## Research Direction

The long-term goal is to determine whether an instrumented hydroponic platform can:

* Maintain stable nutrient conditions over extended growing periods.
* Reduce the amount of manual measurement and adjustment required.
* Apply nutrient and pH corrections in small, repeatable quantities.
* Detect changes in water chemistry before they become harmful to the plants.
* Produce consistent irrigation, circulation and lighting schedules.
* Improve the traceability of hydroponic experiments.
* Compare automatic control strategies with conventional manual operation.
* Generate useful datasets covering complete crop cycles.

The system will initially operate as a supervised experimental platform. Automatic decisions will be introduced progressively as the sensors, dosing rates, communication system and safety mechanisms are validated.

---

# Electronics and Control Development

The hydroponics platform is built around custom electronics and software developed specifically for distributed sensing and equipment control.

The electronics are organized around an ESP32 control node connected to:

* 3 analog measurement channels, one with gated 150 Ohm resistor for the 4-20mA pH sensor.
* 5 low-side mosfet outputs, rated for 12V, 2A, for the dosing pumps.
* 1 circulation-pump output, relay controlled 120Vac output.
* 2 lighting outputs, relay controlled 120Vac output.
* A local network connection to the supervisory computer.

The project documents the complete development process, including sensor interfacing, output-driver design, embedded firmware, communication protocols, web-interface development, calibration, PCB design and long-duration system testing.

<!-- Add the controller schematic or PCB overview here. -->

<img width="3307" height="2339" alt="Schema_electrique_carte_de_controle-1" src="https://github.com/user-attachments/assets/921ffb5c-eca3-45f0-be5a-8cf18cde435c" />

[Schema_electrique_carte_de_controle.pdf](https://github.com/user-attachments/files/30188663/Schema_electrique_carte_de_controle.pdf)
<!-- Add a link to the complete controller schematic PDF here. --><img width="1066" height="969" alt="preview2D" src="https://github.com/user-attachments/assets/9d78c4fd-e175-4b7b-b514-ef7914362c06" />
<img width="1066" height="969" alt="preview2D" src="https://github.com/user-attachments/assets/b6c89bc1-6743-4f18-9aa7-b1b15e1ef5c3" />


---

## Embedded Hardware Controller — ESP32

An ESP32 development module acts as the direct hardware controller for the hydroponics platform.

The microcontroller manages:

* Acquisition of the pH and electrical-conductivity signals.
* Timed activation of the four dosing pumps.
* Accumulation of individual pump operating times.
* Control of the circulation pump.
* Control of the two lighting outputs.
* Switching of the electrical-conductivity sensor ground connection.
* Reception and validation of commands from the supervisory computer.
* Transmission of sensor readings and equipment status.
* System-uptime monitoring.
* Local timing and output-state management.

The ESP32 was selected because it combines analog inputs, digital outputs, network connectivity and a mature software ecosystem in a compact and accessible platform.

The current architecture treats the ESP32 primarily as an equipment-control node. High-level control decisions and the main user interface are handled by the connected computer.

<!-- Add an ESP32 controller schematic or wiring image here. -->
<img width="1066" height="969" alt="preview2D" src="https://github.com/user-attachments/assets/50b18141-93c7-4355-9f1f-4384f7ab951a" />

  <img width="2339" height="1653" alt="Hydroponie_GFX-Diagramme de Branchement-1" src="https://github.com/user-attachments/assets/2ec92322-b8cf-41f2-909f-cdf2c1b90414" />
[Hydroponie_GFX-Diagramme de Branchement.pdf](https://github.com/user-attachments/files/30188703/Hydroponie_GFX-Diagramme.de.Branchement.pdf)

[Hydroponie_GFX-Pinout Simple.pdf](https://github.com/user-attachments/files/30188749/Hydroponie_GFX-Pinout.Simple.pdf)
<img width="2339" height="1653" alt="Hydroponie_GFX-Pinout Simple-1" src="https://github.com/user-attachments/assets/e5b10566-39a9-40e4-91f0-d5fc8ffbf419" />

## Current Prototype I/O Assignment

The present prototype uses the following ESP32 connections:

| Function                 | ESP32 GPIO | Direction    | Description                                 |
| ------------------------ | ---------: | ------------ | ------------------------------------------- |
| Dosing pump 1            |     GPIO 4 | Output       | Timed activation of dosing pump 1           |
| Dosing pump 2            |     GPIO 2 | Output       | Timed activation of dosing pump 2           |
| Dosing pump 3            |    GPIO 15 | Output       | Timed activation of dosing pump 3           |
| Dosing pump 4            |    GPIO 16 | Output       | Timed activation of dosing pump 4           |
| Circulation pump         |    GPIO 25 | Output       | Main water-circulation control              |
| Lighting channel 1       |    GPIO 26 | Output       | First lighting-control output               |
| Lighting channel 2       |    GPIO 27 | Output       | Second lighting-control output              |
| EC sensor ground control |    GPIO 17 | Output       | Controls the EC sensor low-side MOSFET      |
| pH measurement           |    GPIO 34 | Analog input | Reads the conditioned pH transmitter signal |
| EC measurement           |    GPIO 32 | Analog input | Reads the electrical-conductivity interface |

This pin assignment represents the current prototype and may be revised as the controller is transferred to a dedicated PCB.

---

## pH Measurement Interface

The pH measurement system uses an industrial-style transmitter that produces a **4–20 mA current signal**.

A precision shunt resistor converts the current-loop signal into a voltage that can be measured by the ESP32 analog-to-digital converter. In the current prototype, a 150 Ω resistor produces an approximate measurement range of:

* 4 mA → 0.6 V
* 20 mA → 3.0 V

This keeps the signal within the ESP32 input range while using a significant portion of the available ADC span.

The pH measurement design focuses on:

* Reliable conversion of the current-loop signal.
* Protection of the microcontroller input.
* Stable analog grounding.
* Reduction of electrical noise.
* Software filtering and averaging.
* Conversion between raw ADC values, voltage, loop current and calibrated pH.
* Detection of disconnected or abnormal sensor signals.
* Straightforward two-point or multi-point calibration.

Because pH measurement is sensitive to probe condition, temperature, contamination and electrical interference, the software retains access to the raw measurement values. This makes it possible to distinguish sensor problems from calibration or processing errors.

<!-- Add the pH input schematic here. -->

<!-- Add a graph showing raw ADC, current and calibrated pH here. -->

---

## Electrical-Conductivity Measurement

Electrical conductivity is used to estimate the total ionic concentration of the nutrient solution.

The current prototype uses an analog electrical-conductivity interface connected to an ESP32 ADC input. The firmware records the raw ADC value and measured voltage so that the behaviour of the interface can be examined before a final conductivity-conversion model is applied.

The EC measurement system is being developed around:

* Raw analog acquisition.
* Voltage monitoring.
* Software filtering.
* Calibration using reference solutions.
* Temperature compensation.
* Detection of disconnected or invalid readings.
* Controlled measurement timing.
* Electrical isolation from noisy pump and power circuits.
* Comparison with an external conductivity meter.

The project intentionally exposes the intermediate measurement values. This provides better visibility during development than reporting only a calculated conductivity value.

<!-- Add the EC interface schematic here. -->

<!-- Add an EC calibration graph or reference-solution test here. -->

---

## EC Sensor Power and Ground Control

The electrical-conductivity sensor includes a dedicated low-side switching circuit controlled by ESP32 GPIO 17.

This output controls the gate of a MOSFET that connects or disconnects the sensor ground. It allows the firmware or supervisory computer to energize the EC measurement circuit only when a reading is required.

Switched operation may help:

* Reduce continuous electrode excitation.
* Limit electrochemical effects at the probe.
* Separate EC measurements from other analog measurements.
* Investigate interference between the pH and EC circuits.
* Reset the sensor interface between measurements.
* Reduce unnecessary power consumption.
* Implement controlled settling and sampling sequences.

A typical measurement sequence can energize the sensor, wait for the analog output to stabilize, acquire several samples and then disconnect the sensor again.

The timing requirements and measurement repeatability will be characterized experimentally.

<!-- Add the MOSFET switching schematic and timing diagram here. -->

---

## Dosing Pump Control

Four independent dosing-pump channels are provided for nutrient and pH adjustment.

The channels may be assigned to fluids such as:

* Nutrient solution A.
* Nutrient solution B.
* pH-down solution.
* pH-up solution or an additional nutrient.

Each pump can be activated for a specified duration received from the supervisory computer. A command can therefore request a controlled activation such as 0.50 seconds, 3.00 seconds or another permitted interval.

The ESP32 manages the timing locally so that an active dose does not depend on continuous communication with the computer.

The dosing system is designed around:

* Independent control of four pumps.
* Non-blocking timed activation.
* Maximum permitted activation durations.
* Prevention of malformed or unsafe commands.
* Immediate output shutdown commands.
* Per-pump state reporting.
* Individual accumulated operating-time counters.
* Individual runtime-counter reset commands.
* Calibration from operating time to delivered liquid volume.

Timed operation provides a practical first level of repeatability. Once each pump has been calibrated, the software can estimate delivered volume from the requested activation time.

<!-- Add the dosing-pump driver schematic here. -->

<!-- Add a photograph of the four-pump assembly here. -->

---

## Pump Runtime Tracking

The controller maintains an accumulated ON-time value for each dosing pump.

The counters provide information that can be used for:

* Estimating the total volume delivered by each pump.
* Monitoring nutrient usage.
* Identifying differences between expected and actual operation.
* Scheduling pump inspection or tubing replacement.
* Comparing pump performance over time.
* Detecting excessive activation caused by a software or calibration problem.

Each counter can be reset independently after maintenance, recalibration or replacement of the associated nutrient container.

Runtime tracking does not replace direct flow measurement, but it provides a valuable operational record without requiring an individual flow sensor on every dosing line.

---

## Dosing Calibration

Each dosing pump must be characterized before timed activation can be interpreted as a reliable liquid volume.

A basic calibration procedure consists of:

1. Prime the dosing line.
2. Place the outlet in a graduated container.
3. Activate the pump for a known duration.
4. Measure the delivered volume.
5. Repeat the test several times.
6. Calculate the average flow rate.
7. Record the variation between tests.
8. Repeat the procedure at different activation durations.

The resulting calibration can be expressed as:

`Delivered volume = Pump flow rate × Activation time`

Additional correction may be required for short pulses because pump startup, tubing elasticity, fluid viscosity, head pressure and check valves can affect the delivered quantity.

The final software may store an individual calibration coefficient for every pump.

<!-- Add a dosing calibration table or graph here. -->

---

## Circulation Pump Control

The circulation pump moves nutrient solution between the reservoir and the plant-growing area.

Its operation affects:

* Nutrient distribution.
* Oxygenation.
* Sensor representativeness.
* Root-zone conditions.
* Temperature uniformity.
* Mixing after a dosing event.

The circulation output can be controlled remotely and can also follow a daily operating schedule.

Future control strategies may coordinate circulation with sensor measurement and dosing. For example, the system can circulate the reservoir before taking a reading, apply a small dose and then wait for a defined mixing period before evaluating the result.

The hydraulic design and control sequence must prevent a sensor reading taken near the dosing point from being mistaken for the condition of the complete reservoir.

<!-- Add the circulation plumbing diagram here. -->

---

## Lighting Control

Two lighting-control outputs are included in the current hydroponics controller.

Each channel can be operated independently and assigned its own daily ON and OFF schedule. This permits the platform to control separate lighting groups or experimental lighting conditions.

The lighting-control system supports:

* Manual ON and OFF commands.
* Daily operating schedules.
* Independent scheduling of both channels.
* Delayed-start testing.
* Output-state reporting.
* Recovery after controller restart.
* Future coordination with environmental and crop-cycle data.

The lighting outputs are intended to control an external switching stage, relay or driver rather than powering the lights directly from the ESP32.

The hydroponics controller can also be used alongside the separately developed spectral-lighting platform, allowing both projects to contribute to a more complete controlled-growing environment.

<!-- Add the lighting-output schematic or controlled-lighting photograph here. -->

---

## Network Command Interface

The ESP32 communicates with a computer over the local network.

The communication protocol is designed around concise machine-readable commands rather than direct interaction through a user-facing interface hosted on the ESP32.

Commands can be used to:

* Request sensor measurements.
* Activate a dosing pump for a specified duration.
* Stop a pump.
* Reset an individual pump runtime counter.
* Control the circulation pump.
* Control either lighting channel.
* Energize or disconnect the EC sensor.
* Request the current output states.
* Request accumulated pump runtimes.
* Request controller uptime and diagnostic information.

The ESP32 returns structured telemetry containing the sensor readings, output states, timing information and controller status.

Separating the command protocol from the graphical interface allows the same controller to be operated by a Python program, a web server, a diagnostic tool or a future automation service.

<!-- Add an example command-and-response sequence here. -->

---

## Supervisory Computer and Python Server

A continuously operating computer acts as the supervisory layer of the hydroponics platform.

The server is responsible for:

* Communicating with one or more ESP32 nodes.
* Receiving and validating telemetry.
* Storing historical measurements.
* Hosting the local web application.
* Sending manual control commands.
* Managing user-defined schedules.
* Performing higher-level control calculations.
* Recording alarms and unusual conditions.
* Supporting future camera and environmental-sensor integration.

This architecture provides more storage and processing capability than an ESP32-only interface. It also makes it easier to update the application without modifying the firmware responsible for direct equipment control.

The computer can eventually supervise several distributed controllers, cameras and sensor nodes from one interface.

<!-- Add the server and node network diagram here. -->

---

## Web-Based Human-Machine Interface

The system includes a browser-based interface for monitoring and controlling the hydroponics installation.

The interface is organized into functional areas such as:

* Live sensor measurements.
* Dosing-pump controls.
* Nutrient-management settings.
* Circulation and lighting controls.
* Equipment configuration.
* Historical graphs.
* Data export.
* System diagnostics.

The live interface displays pH, electrical conductivity, raw sensor values, output states and controller uptime.

Historical graphs allow the user to examine how the nutrient solution changes over time and how those changes relate to dosing, circulation, lighting and plant growth.

The interface is designed to remain useful during early development, when raw data and manual controls are important, while also supporting more automated operation later.

<!-- Add screenshots of the web interface here. -->

---

## Data Logging and Historical Analysis

Long-duration data collection is one of the central purposes of the project.

The platform can record:

* Timestamped pH readings.
* Timestamped electrical-conductivity readings.
* Raw ADC measurements.
* Sensor-interface voltage and current values.
* Pump activation events.
* Requested dosing durations.
* Accumulated pump runtimes.
* Circulation-pump state.
* Lighting states.
* Controller uptime.
* Communication failures.
* Calibration changes.
* User commands and system alarms.

Historical data can be exported for analysis in spreadsheet, scripting or scientific-computing tools.

This data will make it possible to compare plant cycles, evaluate control strategies and document whether automation produces more stable growing conditions.

---

## Sensor Calibration and Data Quality

Reliable automation depends on reliable measurements.

The sensor-validation process will include:

* Calibration against known pH buffer solutions.
* Calibration against known conductivity solutions.
* Repeated measurements of the same reference.
* Comparison with independent handheld instruments.
* Evaluation of warm-up and stabilization times.
* Noise measurements with pumps and lights operating.
* Drift measurements over several hours or days.
* Temperature-sensitivity testing.
* Probe-cleaning and storage procedures.
* Detection of unrealistic measurement changes.

Raw and processed values will both be retained during development. This prevents filtering or calibration algorithms from hiding problems in the underlying sensor signal.

Calibration dates and coefficients should eventually be stored with the logged measurements so that historical data remains traceable.

---

## Control Strategy Development

The first operating mode of the platform is supervised control.

In this mode, the user observes the measurements and manually requests a defined dosing-pump activation. The system records the command and the resulting change in the nutrient solution.

Once the behaviour of the system is understood, increasingly automatic strategies can be introduced:

1. Measurement and manual dosing.
2. Timed dosing with runtime tracking.
3. Pump-volume calibration.
4. Automatic mixing delays.
5. Rule-based dosing recommendations.
6. User-approved dosing actions.
7. Limited automatic correction.
8. Closed-loop regulation with safety limits.

This staged approach reduces the risk of applying an incorrect dose because of a sensor fault, communication problem or untested control algorithm.

---

## Safety and Fail-Safe Behaviour

A hydroponics controller can directly affect the chemical conditions surrounding living plants. Output control must therefore remain predictable when a fault occurs.

Safety-related design considerations include:

* Defaulting all pump outputs to OFF during startup.
* Enforcing a maximum activation duration.
* Rejecting invalid or incomplete commands.
* Preventing unintended repeated commands.
* Providing an immediate all-outputs-OFF command.
* Reporting active output states continuously.
* Detecting communication loss.
* Avoiding automatic dosing from a single unverified reading.
* Requiring mixing and stabilization time between corrections.
* Defining acceptable pH and conductivity limits.
* Recording every dosing event.
* Providing manual electrical disconnection of pumps.
* Preventing simultaneous activation of incompatible dosing fluids.
* Recovering safely after power interruption or controller reset.

Future revisions may include independent watchdog circuits, reservoir-level detection, leak detection, flow confirmation and normally-off power stages.

---

## Wiring, Connectors and Modularity

The hydroponics environment introduces moisture, nutrient salts and repeated maintenance around electronic equipment.

Connector and wiring decisions therefore consider:

* Resistance to accidental disconnection.
* Polarization and keying.
* Current and voltage ratings.
* Separation of analog sensor wiring from pump wiring.
* Strain relief.
* Cable identification.
* Serviceability.
* Corrosion resistance.
* Splash protection.
* Ease of replacing sensors and pumps.
* Compatibility with professional cable-harness assembly.

The modular architecture allows the reservoir, dosing pumps, sensors, lighting equipment and controller to be serviced independently.

All external connections should be clearly labelled so that the system can be assembled and diagnosed without relying on undocumented wiring.

<!-- Add a wiring-harness diagram or connector photograph here. -->

---

## Hydraulic and Mechanical Integration

The electronic controller operates as part of a larger hydraulic system.

The mechanical installation includes:

* The main nutrient reservoir.
* Water-supply and return tubing.
* Plant-growing channels or containers.
* The circulation pump.
* Flow-control valves.
* Drain connections.
* Sensor mounting positions.
* Dosing injection points.
* Check valves and anti-siphon routing.
* Pump and tubing supports.

Particular attention is required when selecting the location of the sensors and dosing outlets.

The sensors should measure a representative sample of the complete nutrient solution. Concentrated dosing fluids should not contact the probes or plant roots before being adequately mixed.

The plumbing should also allow the system to be drained, cleaned and serviced without leaving large volumes of trapped nutrient solution.

<!-- Add the hydraulic schematic or plumbing block diagram here. -->

---

## PCB Design and Design for Manufacturing

The first version of the platform may use development modules and external driver boards, but the project is intended to progress toward a dedicated controller PCB.

Design-for-manufacturing considerations include:

* Clear separation of low-voltage logic and higher-current outputs.
* Appropriate terminal and connector ratings.
* Protected analog-input circuits.
* Replaceable or serviceable output stages.
* Test points for every sensor and controlled output.
* Standardized component packages.
* Manufacturer-supported trace, spacing, drill and via dimensions.
* Consistent component orientation.
* Clear silkscreen labels.
* Accessible programming and debugging connections.
* Mounting holes and enclosure constraints.
* Moisture and contamination protection.
* Component availability and sourcing risk.
* Compatibility with automated PCB assembly.

The PCB layout must keep sensitive analog measurements away from pump switching currents, wireless circuitry and other noise sources.

<!-- Add the controller PCB layout and render here. -->

---

## Prototype Assembly and Manufacturing

Prototype controllers will be assembled and tested using a combination of development modules, custom PCBs and commercially available sensor and output modules.

The development process includes:

1. Verification of the system block diagram.
2. Sensor-interface prototyping.
3. Output-stage testing with simulated loads.
4. Embedded firmware development.
5. Network-command testing.
6. Web-interface integration.
7. Schematic capture.
8. PCB layout and design-rule checking.
9. Generation of manufacturing files.
10. Prototype PCB fabrication and assembly.
11. Visual inspection and electrical testing.
12. Installation in the hydroponics system.
13. Calibration and long-duration validation.

Moving from a breadboard or wired prototype to a dedicated PCB will improve repeatability, wiring clarity and resistance to accidental disconnection.

---

## Validation and Iteration

Each hardware and software revision will be tested before being trusted with automatic control of the hydroponics installation.

Validation will include:

* Power-rail verification.
* Startup and reset behaviour.
* Analog-input range testing.
* pH calibration.
* Electrical-conductivity calibration.
* Noise measurements during pump switching.
* Individual output testing.
* Timed dosing accuracy.
* Pump runtime-counter accuracy.
* Network disconnection and reconnection.
* Invalid-command handling.
* Lighting and circulation schedule testing.
* Sensor-power switching.
* Long-duration data logging.
* Power-interruption recovery.
* Thermal measurements.
* Moisture and enclosure evaluation.
* Complete crop-cycle operation.

The results of each revision will be documented and used to guide the next schematic, PCB, firmware and mechanical iteration.

---

## Future Development

Planned extensions of the platform may include:

* Automated pH regulation.
* Automated nutrient-strength regulation.
* Water-level measurement.
* Reservoir-temperature measurement.
* Air-temperature and humidity sensing.
* Dissolved-oxygen monitoring.
* Water-flow confirmation.
* Leak detection.
* Individual nutrient-container level monitoring.
* Automatic top-off water control.
* Camera integration.
* Plant-growth image logging.
* Alarm notifications.
* Remote access.
* Multiple hydroponics zones.
* Additional ESP32 sensor and actuator nodes.
* Integration with the closed-loop horticultural-lighting platform.
* Comparison of crop results under different nutrient and lighting strategies.

The project will remain an experimental development platform. New control functions will be introduced only after the related sensors, actuators and safety mechanisms have been characterized under real operating conditions.
