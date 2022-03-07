/* Blink program (Digital output)
The purpose of this program is to cause an LED to blink repeatedly at intervals of 500 milliseconds
Digital pin 13 is identified as an output and when the pin is high, the LED will turn on. When the pin is low, the LED will turn off.
 */

int LED1 = 13;  // Declare "LED1" as a variable for pin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);  // Identify digital pin 13 (LED1) as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH); // Turn on LED when digital pin 13 (LED1) is HIGH
  delay(500); // Wait 500 milliseconds
  digitalWrite(LED1, LOW);  // Turn off LED when digital pin 13 (LED1) is LOW
  delay(500); // Wait 500 milliseconds before repeating the loop
}
