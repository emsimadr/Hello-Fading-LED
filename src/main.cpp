/*
  Hello World for a Led activated by a button push.
*/
#include <Arduino.h>

#define LEDPIN 9
#define BUTTONPIN 6

int buttonState = 0;
int brightness = 0;
int fadeAmount = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUTTONPIN, INPUT);

}

// the loop function runs over and over again forever
void loop() {

  buttonState = digitalRead(BUTTONPIN); // read whether the button was pushed
  if (buttonState == HIGH) {            // if the button is pushed, adjust the brightness
    brightness += fadeAmount;
  }

  // Assert that brightness stays within range of 0 - 255
  if (brightness > 255) {
    brightness = 255;
    fadeAmount *= -1;
  }

  if (brightness < 5) {
    brightness = 5;
    fadeAmount *= -1;
  }

  if (buttonState == HIGH)
    analogWrite(LEDPIN, brightness);    // set the LED to the state of the button
  else
    analogWrite(LEDPIN, LOW);

  delay(50);                           // wait for 200ms
}
