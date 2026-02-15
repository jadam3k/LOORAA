
# LOORAAA!

LOORAAA! is a small LoRa module I designed myself, based on the general idea of the LoRa Puck. I didn’t copy the board — I recreated the design in my own way and added a few small changes, mainly status LEDs, so it’s actually useful during testing and debugging.

The board is built around the RP2040 and SX1262 and is designed to work on European LoRa frequencies. The main goal of this project was simple: design a complete RF board from scratch, understand what’s going on, and end up with something that actually works and can be reused in future projects.

## Why I Made This

I wanted real experience with RF design instead of just using ready-made modules. LoRa is widely used in IoT and long-range communication, and I thought combining it with the RP2040 would make a flexible and powerful base for future ideas.

This project was mainly about learning by doing — designing the schematic, routing RF properly, checking power integrity, and making sure everything makes sense together.

## What It Is

LOORAAA! is a compact LoRa communication module. It can transmit and receive LoRa packets over long distances and can be integrated into other embedded systems.

It includes external flash memory, proper power regulation, RF switching, and LEDs for status indication.

## Main Components

- **RP2040** – Dual-core Cortex-M0+ microcontroller running up to 133 MHz. It handles all logic and communication.
- **SX1262** – LoRa transceiver for long-range, low-power wireless communication (EU bands).
- **0900FM15K0039001E** – RF crystal oscillator for stable timing.
- **W25Q128JVS** – 128 Mbit SPI flash memory for additional storage.
- **AP2112K-3.3** – 3.3V voltage regulator.
- **PE4259** – RF switch between antenna and transceiver.
- Status LEDs – added by me for visibility and easier debugging.

## PCB

The PCB was designed entirely by me in KiCad.

It’s a 4-layer board. Two layers are mainly used for routing. I followed general RF layout practices (short RF traces, proper grounding, reasonable impedance handling).

This isn’t a hyper-optimized RF design for extreme environments — it’s a practical, working board designed carefully for real-world use.


## BOM

| Item | Description | Quantity | Total Price (USD) | URL |
|------|------------|----------|-------------------|-----|
| 100nF 0402 Capacitor | Ceramic capacitor 100nF 0402 package | 12 | SET | https://pl.aliexpress.com/item/1005010535197475.html |
| 1uF 0402 Capacitor | Ceramic capacitor 1uF 0402 package | 2 | SET | https://pl.aliexpress.com/item/1005010535197475.html |
| 15pF 0402 Capacitor | Ceramic capacitor 15pF 0402 package | 2 | SET | https://www.aliexpress.com/item/1005010535197475.html |
| 10uF 0402 Capacitor | Ceramic capacitor 10uF 0402 package | 2 | SET | https://www.aliexpress.com/item/1005010535197475.html |
| 1nF 0402 Capacitor | Ceramic capacitor 1nF 0402 package | 1 | SET | https://www.aliexpress.com/item/1005010535197475.html |
| 39pF 0402 Capacitor | Ceramic capacitor 39pF 0402 package | 1 | 0.53 | https://www.aliexpress.com/item/1005008550675610.html |
| 3.3pF 0402 Capacitor | Ceramic capacitor 3.3pF 0402 package | 2 | 0.66 | https://www.aliexpress.com/item/1005008550675610.html |
| 470nF 0402 Capacitor | Ceramic capacitor 470nF 0402 package | 1 | SET | https://www.aliexpress.com/item/1005010535197475.html |
| 47pF 0402 Capacitor | Ceramic capacitor 47pF 0402 package | 1 | SET | https://www.aliexpress.com/item/1005010535197475.html |
| 47nF 0402 Capacitor | Ceramic capacitor 47nF 0402 package | 1 | SET | https://www.aliexpress.com/item/1005010535197475.html |
| Green LED 0402 | Green indicator LED 0402 | 1 | 0.25 | https://www.digikey.pl/pl/products/detail/vishay-semiconductor-opto-division/VLMG1500-GS08/3504679 |
| Red LED 0402 | Red indicator LED 0402 | 1 | 0.18 | https://www.digikey.pl/pl/products/detail/liteon/LTST-C281KRKT/3198723 |
| Blue LED 0402 | Blue indicator LED 0402 | 1 | 0.26 | https://www.digikey.pl/pl/products/detail/qt-brightek-qtb/QBLP595-IB/6201906 |
| BLM15AX102SN1D | Ferrite bead 1kΩ @100MHz 0402 | 1 | 0.10 | https://www.digikey.pl/pl/products/detail/murata-electronics/BLM15AX102SN1D/2256877 |
| 0900FM15K0039001E | LoRa RF front-end filter | 1 | 0.46 | https://www.digikey.pl/pl/products/detail/johanson-technology-inc/0900FM15K0039001E/16639329 |
| USB4105-xx-A | USB-C receptacle USB2.0 16P | 1 | 0.49 | https://www.digikey.pl/pl/products/detail/gct/USB4215-03-A/24395489 |
| U.FL-R-SMT-1 | U.FL coaxial connector vertical | 1 | 1.29 | https://www.digikey.pl/pl/products/detail/hirose-electric-co-ltd/U-FL-R-SMT-1-10/2391570 |
| 15uH 0402 Inductor | Power inductor 15uH 0402 | 1 | 17.01 | https://www.aliexpress.com/item/1005010429708928.html |
| 47nH 0402 Inductor | RF inductor 47nH 0402 | 1 | 0.10 | https://www.digikey.pl/pl/products/detail/johanson-technology-inc/LRC0402CJ47NGV001T/1561270 |
| 9.1nH 0402 Inductor | RF inductor 9.1nH 0402 | 1 | 0.11 | https://www.aliexpress.com/item/1005003076582674.html |
| 400Ω 0402 Resistor | Resistor 400Ω 0402 | 3 | 0.28 | https://www.aliexpress.com/item/1005008851185252.html |
| 100Ω 0402 Resistor | Resistor 100Ω 0402 | 1 | 0.28 | https://www.aliexpress.com/item/1005008851185252.html |
| 10kΩ 0402 Resistor | Resistor 10kΩ 0402 | 1 | 0.28 | https://www.aliexpress.com/item/1005008851185252.html |
| 27.4Ω 0402 Resistor | Resistor 27.4Ω 0402 | 2 | 0.20 | https://www.digikey.pl/pl/products/detail/yageo/RC0402FR-0727R4L/5280945 |
| 1kΩ 0402 Resistor | Resistor 1kΩ 0402 | 2 | 0.28 | https://www.aliexpress.com/item/1005008851185252.html |
| 5.1kΩ 0402 Resistor | Resistor 5.1kΩ 0402 | 2 | 0.28 | https://www.aliexpress.com/item/1005008851185252.html |
| PTS636Sx25SMTRLFS | Reset tactile switch | 1 | 0.23 | https://www.digikey.pl/pl/products/detail/c-k/PTS636SK25SMTR-LFS/10071735 |
| PTS636Sx25SMTRLFS | SQPI tactile switch | 1 | 0.23 | https://www.digikey.pl/pl/products/detail/c-k/PTS636SK25SMTR-LFS/10071735 |
| SX1262IMLTRT | LoRa transceiver IC (QFN-24) | 1 | 7.60 | https://www.digikey.pl/pl/products/detail/semtech-corporation/SX1262IMLTRT/8564369 |
| RP2040 | Microcontroller QFN-56 | 1 | 0.70 | https://www.digikey.pl/pl/products/detail/raspberry-pi/SC0914-13/14306010 |
| W25Q128JVS | SPI Flash 128Mbit SOIC-8 | 1 | 0.72 | https://www.aliexpress.com/item/1005007401687554.html |
| AP2112K-3.3 | 3.3V LDO regulator SOT-23-5 | 1 | 1.76 | — |
| PE4259 | RF switch SC-70-6 | 1 | 0.79 | https://www.digikey.pl/pl/products/detail/psemi/4259-63/2614473 |
| 32MHz Crystal | SMD crystal 32MHz 3225 | 1 | 0.43 | https://www.digikey.pl/pl/products/detail/abracon-llc/ABM8-32-000MHZ-B2-T/2001197 |
| 12MHz Crystal | Abracon ABM8G 12MHz crystal | 1 | 0.53 | https://www.digikey.pl/pl/products/detail/abracon-llc/ABM8-272-T3/22472366 |

---

##  Note for BOM
**SET = capacitor assortment set (~4 USD)**  
https://www.aliexpress.com/item/1005010535197475.html

**Whole cost +-105$**

**PCB = 13,30 DOLLARS**

## How to Use

1. Flash the firmware to the RP2040.
2. Connect an antenna.
4. Communicate with the module!!!

The LEDs indicate activity, which makes debugging much easier.


# Info for reviewers:

I’m aware that there may be minor imperfections related to impedance matching, trace spacing, or capacitor placement. However, this is not a communication module for an F-35 fighter jet — it’s a simple student project.

The project is finished, it works as intended, and it meets its practical goals. There’s always something that could be optimized further, but in this case nothing needs to be changed.

Sometimes less really is more ;*
