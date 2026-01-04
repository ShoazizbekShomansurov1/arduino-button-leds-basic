# arduino-button-leds-basic
Arduino project demonstrating button-controlled LEDs using external pull-down resistors and 5V logic
# Arduino Buttons & LEDs — Basic Project

This is a beginner-level Arduino project that demonstrates how push buttons
control LEDs using external pull-down resistors and 5V logic.

The goal of this project is to understand basic electronics concepts
instead of relying on built-in Arduino shortcuts.

---

## 🔧 Components
- Arduino Uno
- 3 Push buttons
- 3 LEDs
- 3 × 220Ω resistors (for LEDs)
- 3 × 10kΩ resistors (pull-down for buttons)
- Breadboard
- Jumper wires

---

## ⚙️ How It Works
- Buttons are connected to digital input pins
- External 10kΩ pull-down resistors are used to prevent floating inputs
- Default button state is LOW
- When a button is pressed → the pin reads HIGH
- Each button directly controls one LED

---

## 🔌 Wiring Logic

### Button connection
- One side of the button → 5V
- Other side of the button → digital pin
- 10kΩ resistor from digital pin → GND

### LED connection
- Digital pin → 220Ω resistor → LED → GND

This setup ensures stable and predictable input behavior.

---

## 🧠 Why External Pull-Down Resistors?
External pull-down resistors are used intentionally to:
- Learn how buttons work electrically
- Understand floating inputs
- Build a solid foundation before using INPUT_PULLUP

This approach is commonly taught as a first step in electronics.

---

## 📄 Code Overview
- Uses pinMode(INPUT) for buttons
- No internal pull-up resistors
- Simple one-to-one logic between buttons and LEDs
- Easy to read and modify

---

## 🚀 Possible Improvements
- Rewrite the project using INPUT_PULLUP and compare approaches
- Add software debounce
- Use Serial Monitor to debug button states
- Integrate this logic into a wheeled robot project

---

## 👤 Author
Shoazizbek
