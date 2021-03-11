int acval=0;

void setup()
{
Serial.begin(9600);
Serial.println(" Let's begin the sampling !");
}

void loop()
{
acval=analogRead(A0);
Serial.print("acval ");
Serial.print(acval);
Serial.println("");
delay(100);
}
