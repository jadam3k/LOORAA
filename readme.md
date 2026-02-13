# LOORAAA!  

This is a simple LoRa module built following the LoRa Puck tutorial from the website. I added LEDs to the original design, so the project maintains its originality. Please focus on the information rather than minor details.  

The module is based on **SX1262** and **RP2040**, supporting European frequencies. The project was straightforward to complete.  

## Key Features

- **RP2040** – Microcontroller from Raspberry Pi, dual-core Cortex-M0+ running up to 133 MHz.  
- **SX1262** – LoRa transceiver chip supporting long-range, low-power wireless communication.  
- **0900FM15K0039001E** – Crystal oscillator for accurate timing.  
- **W25Q128JVS** – 128 Mbit SPI flash memory for storage.  
- **AP2112K-3.3** – 3.3V voltage regulator, providing stable power to the module.  
- **PE4259** – RF switch, used for routing signals between antenna and transceiver.  

## PCB

The PCB was designed in **KiCad**. Impedance considerations are adequate for my application; this is not an aerospace project, so precision beyond this is unnecessary.  

- Used 2 out of 4 layers as recommended in the tutorial.  
- Layout follows the tutorial guidelines for functionality.  

Please focus on the essential information — I am aware of minor improvements that can be made, but the current design works as intended.  

## Notes

- The project is optimized for European LoRa frequencies.  
- LEDs were added for visibility and functionality without altering the original concept.  
- This is a personal project, and the current PCB meets all my practical needs.  

