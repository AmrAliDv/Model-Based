<div align="center">
  <img src="https://github.com/user-attachments/assets/3e21a278-457e-4a73-bf3a-988599818f97"></img>
</div>

### Battery Management System

## Project Overview
In this project, I developed a Battery Management System (BMS) to efficiently manage a battery pack, utilizing MATLAB's Battery Builder application for designing the battery model. The BMS system includes a mode selection mechanism based on the State of Charge (SOC) value, which determines whether the battery is in charging or discharging mode using a Stateflow chart. The charging process incorporates Constant Current (CC) and Constant Voltage (CV) method. Additionally, the BMS ensures the safe operation of the battery by managing thermal conditions, monitoring the temperature, and adjusting current levels to prevent overheating during discharge.

## Implementation Steps
<div align="center">
  <img src="https://github.com/user-attachments/assets/f5602a6f-1c2a-41d7-886b-896356cb9db2"></img>
</div>

1. Building the 3P4S Battery Pack:
- This configuration provides a total voltage of 16.8V.
- Note: For the purpose of a faster simulation, the battery pack is set to a 1.5Ah capacity and cell voltage is approximately 3.5 at a 0.2 SOC.

<div align="center">
  <img src="https://github.com/user-attachments/assets/0dd5c080-69eb-43f6-a487-dff4b362e27a"></img>
</div>

2. Operating Mode Control Using State Flow:
- State Selection (Charging or Discharging):
The operating mode is selected based on the State of Charge (SOC) value.

  - If the SOC is below a certain threshold, the system switches to charging mode.
  - If the SOC is above that threshold, the system operates in discharging mode.
3. SOC Estimation Using Coulomb Counting:
- The State of Charge (SOC) is estimated using the Coulomb counting method, which tracks the current flowing in and out of the battery over time. This method provides a real-time estimate of the battery’s charge level.

4. Temperature Management:
- Temperature control is handled by managing the convective heat transfer between the battery and the surrounding ambient air. The system ensures the battery operates within safe temperature limits by adjusting this heat exchange.

5. Temperature Monitoring During Discharge:
- During discharge, the battery temperature is constantly monitored. If the temperature rises above a preset threshold, the system limits the current draw to prevent overheating.

6. Charging Control Using CC/CV Method:
- In charging mode, the Constant Current/Constant Voltage (CC/CV) charging method is used. Initially, the battery is charged at a constant current until it reaches the preset voltage level. Once this voltage is reached, the system switches to constant voltage mode, gradually reducing the charging current to maintain the voltage.



