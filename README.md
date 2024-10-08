﻿# Sketch of proximity alarm
The project aims to measure and display the distance from the device to a given object as well as emit sound feedback when the object gets too close, just like the reversing sensors in cars.


### Components
 - 1x Ultrasonic sensor HCSR04
 - 1x OLED display SSD_1306
 - 1x Buzzer

### Setup
  - Ultrasonic sensor HCSR04
    - GND pin in GND port.
    - VCC pin in 5V port.
    - Echo pin in digital port 12.
    - Trigger pin in digital port 13.
  - OLED display SSD_1306
    - GND pin in GND port.
    - VDD pin in 5v port.
    - SDK and SDA pins on analog ports 4 and 5 respectively.
  - Buzzer
    - Positive pin in digital port 11.
    - Negative pin in GND port.

### Images of project.
![WhatsApp Image 2024-08-19 at 13 29 26](https://github.com/user-attachments/assets/b301298e-98ae-45c3-ab44-870575639dcf)

</br>
</br>

![WhatsApp Image 2024-08-19 at 12 39 01](https://github.com/user-attachments/assets/9aa64dab-f045-4907-8ede-1342e584a9b1)
