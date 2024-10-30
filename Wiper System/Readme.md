<img height="600" width="1200" src="https://github.com/user-attachments/assets/acd37cb4-7a9d-4200-88f2-b36785f813a2"></img>

### Project Overview
This project implements a wiper control system using MATLAB Simulink and generates C code via Embedded Coder. The system adjusts the wiper motor's duty cycle based on various inputs to ensure optimal performance under different conditions.

### Inputs
The wiper system accepts the following inputs:
Rain Sensor Signal: A sensor reading indicating the presence of rain.
Speed Request: A user-defined input specifying the desired speed of the wipers.
Wiper Mode: The operational mode of the wiper system, which can be set to one of the following:
- Off
- Low Speed
- High Speed
- Automatic

### Modes of Operation
The wiper system supports multiple modes:
1. Off: The wipers are inactive.
2. Low Speed: The wipers operate at a predefined low speed.
3. High Speed: The wipers operate at a predefined high speed.
4. Automatic: The wipers adjust their speed based on rain intensity and user speed requests.

### Automatic Speed Control
In automatic mode, the wiper speed can be adjusted to one of the following values based on the rain sensor reading:
- 0
- 0.4
- 0.45
- 0.5
- 0.55
- 0.6
- 0.65
- 0.7

The speed adjustment is determined by the sensor reading, ensuring optimal responsiveness to changing conditions.

### Implementation
The project is implemented using MATLAB Simulink, and the generated C code can be deployed to microcontroller systems for real-time operation.


