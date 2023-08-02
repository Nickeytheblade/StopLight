#include <Arduino.h>
// Define the pin numbers for the LEDs
const int redPin = 9;
const int yellowPin = 10;
const int greenPin = 11;

// Define the duration (in milliseconds) for each state
const int redDuration = 5000; // 5 seconds for red light
const int yellowDuration = 2000; // 2 seconds for yellow light
const int greenDuration = 5000; // 5 seconds for green light

void setup() {
  // Initialize the digital pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red light
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(redDuration);

  // Red and yellow lights
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(yellowDuration);

  // Green light
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(greenDuration);

  // Yellow light
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(yellowDuration);
}
