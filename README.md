# One-Way-Communication-Walkie-Talkie
Developed a one-way wireless walkie-talkie using two ESP32 boards. Audio is captured through an INMP441 I²S microphone, transmitted over Wi-Fi using UDP, and played through a PAM8403 amplifier and speaker. The project demonstrates low-latency, real-time digital audio streaming for embedded IoT communication.
# ESP32 One-Way Wireless Walkie-Talkie

A real-time wireless audio communication system built using two ESP32 boards. The transmitter captures audio from an INMP441 I²S microphone and streams it over Wi-Fi using UDP. The receiver plays the received audio through a speaker using the ESP32 DAC and a PAM8403 audio amplifier.

## Features

- Real-time wireless audio streaming
- Low-latency UDP communication
- I²S digital microphone support
- ESP32 Wi-Fi communication
- PAM8403 audio amplifier support
- Portable and low-cost design
- Voice activity LED indication

---

## Hardware Used

### Transmitter
- ESP32 Development Board
- INMP441 I²S Microphone
- LED + 220Ω Resistor
- Buck Converter (5V → 3.3V)

### Receiver
- ESP32 Development Board
- PAM8403 Audio Amplifier
- 8Ω / 3W Speaker
- Buck Converter

---

## Software Used

- Arduino IDE
- ESP32 Board Package
- WiFi Library
- WiFiUDP Library
- ESP32 I²S Driver

---

## Working Principle

1. INMP441 captures audio.
2. ESP32 reads digital audio using I²S.
3. Audio is converted into 16-bit PCM.
4. Audio packets are sent through UDP over Wi-Fi.
5. Receiver ESP32 receives UDP packets.
6. Audio is converted back to analog using DAC.
7. PAM8403 amplifies the signal.
8. Speaker reproduces the audio.

---

## Components

- ESP32 ×2
- INMP441
- PAM8403
- Speaker
- Buck Converter
- USB Cable
- LED
- Resistor
- Connecting Wires

---

## Applications

- Wireless microphone
- Classroom audio system
- Intercom
- Smart home voice alerts
- Public announcement system
- Baby monitoring
- Security audio monitoring
- IoT communication

---

## Future Scope

- Two-way communication
- Audio compression
- Noise cancellation
- AI voice enhancement
- Cloud integration
- Long-range communication
- Secure encrypted transmission

---

## Folder Structure

```
ESP32-One-Way-Walkie-Talkie/
│
├── Transmitter/
│     └── transmitter.ino
│
├── Receiver/
│     └── receiver.ino
│
├── Images/
│     ├── BlockDiagram.png
│     └── CircuitDiagram.png
│
├── README.md
└── LICENSE
```

---

## Author

Paparao Kodali
