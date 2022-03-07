/* Light chaser program (Digital output)
The purpose of this program is to cause 3 LEDs to blink one after the other repeatedly
Digital pins 11, 10, and 9 are identified as outputs
When a pin is high, the respective LED will turn on. When a pin is low, the respective LED will turn off.
 */
int LED1 = 11;  // Declare "LED1" as a variable for pin 11
int LED2 = 10;  // Declare "LED2" as a variable for pin 10
int LED3 = 9;   // Declare "LED3" as a variable for pin 9

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);  // Identify digital pin 11 (LED1) as an output
  pinMode(LED2, OUTPUT);  // Identify digital pin 10 (LED2) as an output
  pinMode(LED3, OUTPUT);  // Identify digital pin 9 (LED3) as an output
} 

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH); // Turn on LED1 when digital pin 11 is HIGH
  delay(100); // Wait 100 milliseconds
  digitalWrite(LED1, LOW);  // Turn off LED1 when digital pin 11 is LOW
  delay(100); // Wait 100 milliseconds
  digitalWrite(LED2, HIGH); // Turn on LED2 when digital pin 10 is HIGH
  delay(100); // Wait 100 milliseconds
  digitalWrite(LED2, LOW);  // Turn off LED2 when digital pin 10 is LOW
  delay(100); // Wait 100 milliseconds
  digitalWrite(LED3, HIGH); // Turn on LED3 when digital pin 9 is HIGH
  delay(100); // Wait 100 milliseconds
  digitalWrite(LED3, LOW);  // Turn off LED3 when digital pin 9 is LOW
  delay(100); // Wait 100 milliseconds before repeating the loop
}
