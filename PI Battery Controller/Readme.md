<div>
<img src="https://github.com/user-attachments/assets/98239f1b-74d6-47cc-8c20-199e3852d577"></img>
</div>

### PI Battery Controller with Bidirectional DC Converter

## Project Overview
This project controls the battery charging and discharging process using a PI Controller and a Bidirectional DC Converter. The system is designed to regulate the charging and discharging of a 24V battery to a 48V load. The PI controller adjusts the converter’s operation to maintain the load voltage at 48V during discharging and ensures the battery is properly charged in charging mode. The system uses a bidirectional DC-DC converter to step up the voltage from 24V to 48V during discharging and step it down from 48V to 24V to charge the battery.

<div>
<img src="https://github.com/user-attachments/assets/c01d30e9-1c99-4493-bbe8-5f46bc6bc8c7"></img>
</div>

## Charging Mode
- The bidirectional converter operates in buck mode to step down the voltage from 48V to charge the 24V battery.
- The PI controller calculates the error between the battery's fully charged voltage and the actual battery voltage.
  Based on this error, the PI controller adjusts the PWM width (duty cycle) of the converter to ensure the battery is charged efficiently to its desired voltage level.
## Discharging Mode
- The bidirectional converter operates in boost mode to step up the 24V battery voltage to 48V to supply power to the load.
- The system is designed to deliver 48V at 5.2A (equivalent to 250W) to the load.
- The PI controller maintains the load voltage at 48V and calculates the difference between the actual voltage and the desired 48V.
  The controller adjusts the PWM duty cycle based on this error to ensure the load voltage remains stable at 48V.
