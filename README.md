# Fan Speed Control System with DHT Sensor

This Arduino project is designed to control the speed of a fan based on the temperature measured by a DHT11 or DHT22 sensor. The fan speed will increase or decrease depending on the temperature.

## Requirements

1. Arduino Board (e.g., Arduino Uno, Arduino Nano)
2. DHT11 or DHT22 Temperature and Humidity Sensor
3. DC Fan
4. NPN Transistor (e.g., 2N2222)
5. Resistor (1kΩ - 10kΩ) - The exact value will depend on your transistor and fan specifications.
6. Breadboard and Jumper Wires

## Circuit Connection

Follow the circuit diagram to connect the components:

DHT Sensor:
VCC - 5V
GND - GND
Data - D12

Fan:
Positive (+) - 12V (via external power supply)
Negative (-) - Collector of NPN Transistor

NPN Transistor:
Emitter - GND
Base - D9 (via 1kΩ Resistor)
Collector - Negative (-) of Fan

Ensure that you have an external power supply for the fan, and the ground of the external power supply should be connected to the Arduino's ground.

## Installation

1. **Arduino IDE**: If you haven't already, download and install the Arduino IDE from the official website: https://www.arduino.cc/en/software

2. **DHT Library**: This project uses the DHT library to read data from the DHT sensor. If you don't have the library installed, follow these steps to install it:
   - Open Arduino IDE
   - Go to "Sketch" > "Include Library" > "Manage Libraries..."
   - In the Library Manager, search for "DHT" and click on "DHT sensor library by Adafruit."
   - Click "Install" to install the library.

3. **Upload the Code**: Open the provided Arduino code (Temp_Controlled_Fan.ino) in the Arduino IDE. Connect your Arduino board to your computer via USB, select the correct board and port under the "Tools" menu, and click the "Upload" button to upload the code to your Arduino board.

4. **Serial Monitor**: After uploading the code to your Arduino, open the Serial Monitor by clicking on the magnifying glass icon in the Arduino IDE's top right corner. Set the baud rate to 9600 in the bottom right corner of the Serial Monitor window.

5. **Observation**: Once the code is running, you should see temperature readings along with fan speed control information printed on the Serial Monitor.

## Usage

- The code will continuously read the temperature from the DHT sensor and adjust the fan speed accordingly. The fan will be turned off if the temperature is below 26°C and will increase in speed as the temperature rises.

- Observe the changes in the fan speed and temperature on the Serial Monitor.

- You can also modify the temperature thresholds and fan speed settings in the code to suit your specific requirements.

## Troubleshooting

- If the fan is not responding, check your circuit connections and ensure that the external power supply for the fan is connected correctly.

- Make sure you have selected the correct Arduino board and COM port under the "Tools" menu in the Arduino IDE.

- Double-check that the DHT library is installed correctly.

## License

This project is licensed under the [MIT License](LICENSE).