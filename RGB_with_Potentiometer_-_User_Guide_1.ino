/* RGB color change with potentiometer program (Analog input)
The purpose of this program is to change the color of an RGB LED usng a potentiometer
Turning the potentiometer changes the 0-1023 value
When this value is between 0-341, the LED will appear as Green
When this value is between 342-682, the LED will appear as Red
When this value is betwen 683-1023, the LED will appear as Blue
 */
int GREEN_LED = 9;  // Declare "GREEN_LED" as a variable for pin 9
int RED_LED = 10; // Declare "RED_LED" as a variable for pin 10
int BLUE_LED = 11;  // Declare "BLUE_LED" as a variable for pin 11
int PotentiometerPin = A0;  // Declare "PotentiometerPin" as a variable for pin A0
int PotentiometerValue = 0; // Declare "PotentiometerValue" as the current potentiometer value

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT); // Identify digital pin 9 (GREEN_LED) as an output 
  pinMode(RED_LED, OUTPUT); // Identify digital pin 10 (RED_LED) as an output 
  pinMode(BLUE_LED, OUTPUT); // Identify digital pin 11 (BLUE_LED) as an output 
  pinMode(PotentiometerPin, INPUT); // Identify A0 (Potentiometer) as an input 
}

void loop() {
  // put your main code here, to run repeatedly:
 PotentiometerValue = analogRead(PotentiometerPin); // Read the value of the PotentiometerPin as the PotentiometerValue
  
 if (PotentiometerValue<=341){ // When PotentiometerValue is between 0 and 341
  analogWrite(GREEN_LED, 255);  // Green will be fully on
  analogWrite(RED_LED, 0);  // Red will be fully off
  analogWrite(BLUE_LED, 0); // Blue will be fully off
  }
 else if (PotentiometerValue>=682){ // When PotentiometerValue is between 342 and 682
  analogWrite(GREEN_LED, 0);  // Green will be fully off
  analogWrite(RED_LED, 255);  // Red will be fully on
  analogWrite(BLUE_LED, 0); // Blue will be fully off
  }
 else { // When PotentiometerValue is between 683 and 1023
  analogWrite(GREEN_LED, 0);  // Green will be fully off
  analogWrite(RED_LED, 0);  // Red will be fully off
  analogWrite(BLUE_LED, 255); // Blue will be fully on
}
}
