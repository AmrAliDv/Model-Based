<div align="center">
<img src="https://github.com/user-attachments/assets/442f0478-ea67-4a02-bfaa-66b1123c7bee" width="800px" height="400px "></img>
</div>
### overview
This project utilizes MATLAB's Battery Designer application to model and simulate a battery pack with a 3P4S configuration.
The system implements thermal management through convection to ambient, and it estimates the State of Charge (SOC) using Coulomb Counting. 
Additionally, the charging current is dynamically adjusted based on temperature values to ensure safe and efficient charging.

### Features
- Battery Pack Configuration: The battery pack is modeled with a 3P4S configuration, which means 3 cells in parallel and 4 cells in series.
- Thermal Management: Convection-based thermal management is implemented to model heat dissipation to the surrounding environment.
- SOC Estimation: The Coulomb Counting method is used to estimate the battery's State of Charge (SOC).
- Dynamic Charging Control: The charging current is dynamically adjusted based on the battery temperature, preventing overheating during charging.

<div align="center">
<img src="https://github.com/user-attachments/assets/f4111b0a-5946-4bf5-849d-2f4f51ef6c8b" width="800px" height="400px "></img>
</div>
### Charging Process and SOC Monitoring
The figure below shows the scope results from the simulation, where we monitor the charging process of the battery pack. The charging process is governed by the State of Charge (SOC), which starts at 0.3 (30%) and ends at 0.9 (90%).

- Charging Start: The charging process begins when the SOC reaches 0.3 (30% charge).
- Charging End: The charging process stops once the SOC reaches 0.9 (90% charge).
Throughout the charging process, the temperature of the battery pack is continuously monitored to ensure safe operation, and the charging method follows the Constant Current / Constant Voltage (CC/CV) approach:

Constant Current (CC): During the initial stage of charging, the battery receives a constant current.
Constant Voltage (CV): Once the battery voltage reaches a set threshold, the charging switches to a constant voltage mode, reducing the current to maintain that voltage.
The scope results highlight both the SOC and temperature variations over time, demonstrating how the system adjusts the charging current based on the SOC and temperature to prevent overheating while maximizing the charge rate.
