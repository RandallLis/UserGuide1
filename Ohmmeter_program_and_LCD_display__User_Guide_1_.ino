/* Ohmmeter program and display the value on the LCD with Ω symbol (The ohmmeter)
The purpose of this program is to determine the missing value of a resistor and display this value on an LCD display
 */
#include <LiquidCrystal.h>  // Add LCD to library code

LiquidCrystal lcd (12, 11, 5, 4, 3, 2); // Declare these pins to connect to the LCD display

float R1 = 1000.0;  // Declare "R1" as a variable with decimals
float R2 = 0.0; // Declare "R2" as a variable with deciamals
float Vin = 5.00; // Declare "Vin" as a variable with decimals
float Vout = 0.0; // Declare "Vout" as a variable with decimals
float Avalue = 0.0; // Declare "Avalue" as a variable with decimals
int Apin = A5; // Declare "Vin" as a variable for pin A5

byte customChar[8] = {  // Generate the Ohm Symbol on the LCD display using the following pattern:

  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B11011,
  B00000,
};

void setup(){
  // put your setup code here, to run once:
lcd.begin(16,2);  // Identify the LCD display as having 16 columns and 2 rows 
Serial.begin(9600); // Set the baud rate to 9600 buts per second

int Avalue = analogRead(Apin);  // Identify the state of Apin as the value of Avalue 

Vout = Avalue * (Vin / 1023); // Convert the Avalue to voltage value by dividing by 1023 

R2 = R1 * (1 / ((Vin/Vout) - 1)); // Equation to find the value of second resistor using R1, Vin and Vout

lcd.print("Resistor value"); // Print the value of the resistor on the LCD display
lcd.setCursor(0,1); // Set the starting point of this print to the coordinate 0,1
lcd.print("R2:"); // Print the value of R2 on the LCD display
lcd.print(R2);  // Print R2

lcd.write(byte(0)); // Data type is byte
lcd.createChar(0, customChar);  // This allows custom characters to be created for use on the LCD display

}

void loop(){
  // put your main code here, to run repeatedly:
}
