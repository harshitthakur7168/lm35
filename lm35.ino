const int adc = 0 ; //naming pin 0 of analog input side as adc
const int high = 8 ; // For turning on and off yellow LED
const int low = 9 ; // For turning on and off Green LED
void setup()
{
Serial.begin(9600) ; //Starting serial Communication at baud rate of 9600
pinMode(high,OUTPUT); //declaring LED pins as OUTPUT
pinMode(low,OUTPUT);
}
void loop()
{
int adc = analogRead(0) ; //reading analog voltage and storing it in an integer
adc = adc * 0.48828125; //converting reading into Celsius
Serial.print("TEMPRATURE = "); //to Display on serial monitor
Serial.print(adc); //Temperature reading
Serial.print("*C"); //TEMPRATURE = 27*C ETC
Serial.println(); //To end the line
delay(1000); //1 Sec delay
/*
LOGIC:
if (temperature (adc) > 70 ° C )
turn on Yellow Leds
turn off Green Leds
else
turn off Yellow Leds
turn on Green Led
*/
if(adc>70) // This is the control statement
{
digitalWrite(high,HIGH) ;
digitalWrite(low,LOW) ;
}
else
{
digitalWrite(high,LOW) ;
digitalWrite(low,HIGH) ;
}
}
