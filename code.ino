#define SENSE A0 // IR Sensor
void setup()
{
pinMode(SENSE, INPUT);
pinMode(2, OUTPUT);
pinMode(LED_BUILTIN, OUTPUT); // 13+
}
void loop()
{
if(digitalRead(SENSE))
{
digitalWrite(LED_BUILTIN, HIGH);
pinMode(2, LOW);
}

// Set delay time
else
{
 delay (2000);
 if(digitalRead(SENSE))
 {
 digitalWrite(LED_BUILTIN, HIGH); 
 pinMode(2, HIGH);
}
 else
 {

 digitalWrite(LED_BUILTIN, LOW);
pinMode(2, LOW);
 }
}
}