/* PB as input program (Digital Input)
The purpose of this program is to turn an LED on and off through a push button
The push button is connected to pin 5
The LED is connected to pin 10
 */
int ButtonPin = 5;  // Declare "ButtonPin" as a variable for pin 5
int LEDPin = 10;  // Declare "LEDPin" as a variable for pin 10
int ButtonState = 0;  // Declaring "ButtonState" as a variable to be placed as "HIGH" or "LOW"

void setup() {
  // put your setup code here, to run once:
pinMode (LEDPin, OUTPUT);  // Identify digital pin 10 (LEDPin) as an output
pinMode (ButtonPin, INPUT);  // Identify digital pin 5 (ButtonPin) as an input
}

void loop() {
  // put your main code here, to run repeatedly:
ButtonState = digitalRead (ButtonPin);  // Identify the state of the push button
if (ButtonState == HIGH){  // States that the following line only applies if the ButtonState is HIGH (push button is being pressed)
  digitalWrite (LEDPin, HIGH);  // Turn on LEDPin when digital pin 10 is HIGH
} else {  // States that the following line only applies if the ButtonState is NOT HIGH (push button is not being pressed)
  digitalWrite(LEDPin, LOW);  // Turn off LEDPin when digital pin 10 is LOW
}
}
