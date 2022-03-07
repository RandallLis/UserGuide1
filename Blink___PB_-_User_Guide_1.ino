/* Blink + PB control LED program (The none-Delay (millis))
The purpose of this program is to make an LED blink through the use of a push button without using delay(), 
which will stall the program as nothing can happen during this delay period 
*/
int REDLED = 5;  // Declare "REDLED" as a variable for pin 5
int BLUELED = 13; // Declare "BLUELED" as a variable for pin 12
int PushButton = 10; // Declare "PushButton" as a variable for pin 10
int PushButtonState = 0;  // Declaring "PushButtonState" as a variable to be placed as "HIGH" or "LOW"
int intervalLED = 1000; // The "delay" time between changes in REDLEDState
unsigned long previousLED = 0;  // The last recorded state of the red LED 
int REDLEDState = LOW; // Declaring "REDLEDState" as a variable to be placed as "HIGH" or "LOW"

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Set the baud rate to 9600 bits per second
pinMode(REDLED, OUTPUT); // Identify pin 5 (REDLED) as an output
pinMode(BLUELED, OUTPUT); // Identify pin 13 (BLUELED) as an output
pinMode(PushButton, INPUT); // Identify pin 10 (PushButton) as an input

}

void loop() {
  // put your main code here, to run repeatedly:

unsigned long currentMillis = millis(); // All the loop values are stored

if (currentMillis - previousLED >= intervalLED) { // The previousLED is substracted by the currentMilles and
                                                  // if the result is >= the intervalLED:
  previousLED = currentMillis;  // The last recorded state of the red LED will be the currentMillis state

  if(REDLEDState == LOW) { // States that the following line only applies if the REDLEDState is LOW
    REDLEDState = HIGH;  // REDLEDState will become HIGH AFTER the REDLEDState is LOW 
    
  }else{  // When the REDLEDState is not LOW, it will then become HIGH
    REDLEDState = LOW;  // REDLEDState will become LOW AFTER the REDLEDState is HIGH 
  }
  digitalWrite(REDLED, REDLEDState);  // The pin designated to the LED will be in the same state as the REDLEDState
}

PushButtonState = digitalRead (PushButton); // Identify the state of the push button

  if (PushButtonState == HIGH) {  // States that the following line only applied if pin 13 is HIGH
    digitalWrite (BLUELED, HIGH);  // Turn on Blue LED when digital pin 13 is HIGH
  
}  else { // States that the line only applies if pin 13 is not HIGH
      digitalWrite (BLUELED, LOW);  // Turn off Blue LED when digital pin 13 is LOW 
}
}
