# Hello Fading LED

This project is built for an Arduino pro micro. The components to make this work are:
* a push button, with a pull up resistor to avoid bouncing.
* Regular led with a 220Ω resistor

The led is connected to the analog output pin 9 to adjust the brightness by applying PWD of values between 0 and 255.
Whenever the button is pushed the LED pin is pulled HIGH and the brightness is adjusted in 50ms intervalls until the button is released again. The LED pins is pulled LOW but the brightness state is maintained until the next button push.
