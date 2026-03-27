# ESP32-2-Relay-Control
Controlling 2-channel relay module using ESP32 with alternating logic
This project demonstrates how to control a 2-channel relay module using ESP32.  
The relays are alternately switched ON and OFF in a loop.

---

## Features

- Control 2 relays using ESP32
- Alternating ON/OFF logic
- Serial monitor debugging
- Beginner-friendly embedded project

---

## Components Used

- ESP32
- 2-Channel Relay Module (5V)
- Jumper Wires
- Breadboard (optional)

---

## Connections

### Relay Module → ESP32

| Relay Pin | ESP32 Pin |
|----------|----------|
| VCC      | VIN (5V) |
| GND      | GND      |
| IN1      | GPIO 26  |
| IN2      | GPIO 27  |

---

## Working

- Relay 1 turns ON while Relay 2 is OFF  
- After 2 seconds, Relay 1 turns OFF and Relay 2 turns ON  
- This cycle repeats continuously  

---

## Code

```cpp
int relay1 = 26;
int relay2 = 27;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  digitalWrite(relay1, LOW);   // ON
  digitalWrite(relay2, HIGH);  // OFF
  Serial.println("Relay1 ON | Relay2 OFF");
  delay(2000);

  digitalWrite(relay1, HIGH);  // OFF
  digitalWrite(relay2, LOW);   // ON
  Serial.println("Relay1 OFF | Relay2 ON");
  delay(2000);
}
