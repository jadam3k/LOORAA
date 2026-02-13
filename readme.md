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

## How to Use

1. Flash the firmware to the RP2040.
2. Connect an antenna.
4. Communicate with the module!!!

The LEDs indicate activity, which makes debugging much easier.


# Info for reviewers:

I’m aware that there may be minor imperfections related to impedance matching, trace spacing, or capacitor placement. However, this is not a communication module for an F-35 fighter jet — it’s a simple student project.

The project is finished, it works as intended, and it meets its practical goals. There’s always something that could be optimized further, but in this case nothing needs to be changed.

Sometimes less really is more ;*