//#include "LiquidCrystal.h"

float output_voltage = 0.0;
float input_voltage = 4.976;//input voltage before Rref
float temp=0.0;
const int buzzer = 9; //buzzer to arduino pin 9
const float C_freq = 261.626;//C frequency
const float D_freq = 293.665;//D frequency
const float E_freq = 329.628;//E frequency
const float F_freq = 349.228;//F frequency
const float G_freq = 391.995;//G frequency
const float L_freq = 440 ;//L frequency
const float B_freq = 493.883;//B frequency


void setup()
{
   Serial.begin(9600);     //  opens serial port, sets data rate to 9600 bps
   pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}
void loop()
{

//Conversion formula for voltage
   
   float analog_value = analogRead(A0);
   output_voltage = (analog_value * 5.0) / 1024.0; 

   
   if (output_voltage < 0.1) 
   {
     output_voltage=0.0;
     delay(300);
     noTone(buzzer);
   } 
    Serial.print("v= ");
    Serial.println(output_voltage,3);
    //tone(buzzer, 100);
    delay(300);
    //noTone(buzzer);
    if (output_voltage >(1-0.05)*0.2*input_voltage && output_voltage < (1+0.05)*0.2*input_voltage)
    {
      Serial.println("C\r");
      tone(buzzer, C_freq);
      delay(300);
    }
    if (output_voltage >(1-0.05)*0.368*input_voltage && output_voltage < (1+0.05)*0.368*input_voltage)
    {
      Serial.println("D\r");
      tone(buzzer, D_freq);
      delay(300);
    }
    if (output_voltage >(1-0.05)*0.33*input_voltage && output_voltage < (1+0.05)*0.33*input_voltage)
    {
      Serial.println("E\r");
      tone(buzzer, E_freq);
      delay(300);
    }
    if (output_voltage >(1-0.05)*0.25*input_voltage && output_voltage < (1+0.05)*0.25*input_voltage)
    {
      Serial.println("F\r");
      tone(buzzer, F_freq);
      delay(300);
    }
    if (output_voltage >(1-0.05)*0.455*input_voltage && output_voltage < (1+0.05)*0.455*input_voltage)
    {
      Serial.println("G\r");
      tone(buzzer, G_freq);
      delay(300);
    }
    if (output_voltage >(1-0.05)*0.55*input_voltage && output_voltage < (1+0.05)*0.55*input_voltage)
    {
      Serial.println("L\r");
      tone(buzzer, L_freq);
      delay(300);
    }
    if (output_voltage >(1-0.05)*0.5*input_voltage && output_voltage < (1+0.05)*0.5*input_voltage)
    {
      Serial.println("B\r");
      tone(buzzer, B_freq);
      delay(300);
    }
    
}
