/* Fade program (Analog output)
The purpose of this program is to fade the brightness of an LED from 0-255 and visa versa repeatedly
The LED is connected to pin 10
The LED fades at an interval of 1 every 6 seconds continuously upwards until it reaches maximum brightness
The LED then decreases at the same speed and interval until the loop restarts
 */
int LED = 10; // Declare "LED" as a variable for pin 10 
int brightness = 0; // Set starting brightness of the LED to 0
int fadeAmount = 1; // Set the interval at which the LED will fade

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT); // Identify digital pin 10 (LED) as an output
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED, brightness); // Set the brightness of digital pin 10 (LED)
brightness = brightness + fadeAmount; // Increase the brightness by an increment of 1 which will then be used for the next loop
if (brightness <= 0 || brightness >= 255) { // When increment of 1 causes these boundaries to be exceed, the direction of fading is reversed (line 21)
  fadeAmount = -fadeAmount;
}
delay(6); // Wait 6 milliseconds between increments of LED brightness
}
