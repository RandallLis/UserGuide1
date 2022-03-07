/* Control the fade of LED based on potentiometer program (Analog input)
The purpose of this program is to fade the brightness of an LED usng a potentiometer
The value of the potentiometer ranges from 0-1023 and the "map" function converts this to 0-255 depending on the position of the potentiometer
 */
int LEDPin = 5; // Declare "LEDPin" as a variable for pin 5 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Set the baud rate to 9600 bits per second
pinMode(LEDPin, OUTPUT);  // Identify digital pin 5 (LEDPin) as an output 
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(A0); // Read the analog value in 0-1023 through analog pin A0
  int brightness = map(analogValue, 0, 1023, 0, 255); // Converts the brightness range from 0-1023 to 0-255
  analogWrite(LEDPin, brightness);  // Set the brightness of digital pin 5 (LEDPin)
}
