

### PI Battery Controller with Bidirectional DC Converter

## Project Overview
This project implements a PI Battery Controller using a Bidirectional DC Converter for managing the charging and discharging of a 24V battery system. The system is designed to:
- Discharge Mode: Step up the battery voltage from 24V to 48V to power the load.
- Charging Mode: Step down the voltage from 48V to 24V to charge the battery.
The PI Controller is used to maintain the load voltage at 48V in discharging mode and ensure that the battery is fully charged in charging mode.
The controller calculates the difference between the fully charged battery voltage and the actual voltage, adjusting the charging process accordingly.




