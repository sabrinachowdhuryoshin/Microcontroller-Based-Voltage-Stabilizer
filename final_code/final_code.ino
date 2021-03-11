int acval = 0;
int relay1 = 3;
int relay2 = 4;
int relay3 = 5;
int relay4 = 6;
int relay5 = 7;

void setup()
{
Serial.begin(9600);
Serial.println("meaw");
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
pinMode(relay3, OUTPUT);
pinMode(relay4, OUTPUT);
pinMode(relay5, OUTPUT);
digitalWrite(relay1, 1);
digitalWrite(relay2, 1);
digitalWrite(relay3, 1);
digitalWrite(relay4, 1);
digitalWrite(relay5, 1);
}

void loop() 
{
acval = analogRead(A0);
Serial.print("AC analog VALUE");
Serial.print(acval);
Serial.println("");
delay(100);

if ( acval <= 263)
{
Serial.println("Voltage is less than 130V ");
digitalWrite(relay1, 1);
digitalWrite(relay2, 1);
digitalWrite(relay3, 1);
digitalWrite(relay4, 1);
digitalWrite(relay5, 1);
}

else if (acval >= 263 && acval <= 283)
{
Serial.println("Voltage is around 130V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //170 >>192.4 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 293 && acval <= 306)
{
Serial.println("Voltage is around 140V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //170 >>192.4 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 313 && acval <=
335)
{
Serial.println("Voltage is around 150V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //170 >>192.4 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 342 && acval <= 363)
{
Serial.println("Voltage is around 160V ");
digitalWrite(relay1,1);  //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //170 >>192.4 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 369 && acval <= 394)
{
Serial.println("Voltage is around 170V ");
digitalWrite(relay1, 1); 
digitalWrite(relay2, 1);
digitalWrite(relay3, 1);  //170 >>192.4 tapper3
digitalWrite(relay4, 1); 
digitalWrite(relay5, 1); 
}

else if (acval >= 392 && acval <= 413)
{
Serial.println("Voltage is around 180V ");
digitalWrite(relay1, 1); 
digitalWrite(relay2, 1); 
digitalWrite(relay3, 0); //180 >>204.4 tapper3
digitalWrite(relay4, 1); 
digitalWrite(relay5, 1); 
}

else if (acval >= 419 && acval <= 434)
{
Serial.println("Voltage is around 190V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 0); //190 >>216.1 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 451 && acval <= 474)
{
Serial.println("Voltage is around 200V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 0); //200>>218.5 tapper 2
digitalWrite(relay3, 1); //tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 472 && acval <= 506)
{
Serial.println("Voltage is around 210V ");
digitalWrite(relay1, 0); //210>>219.5 tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 483 && acval <= 512)
{
Serial.println("Voltage is around 215V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //tapper3
digitalWrite(relay4, 0); //215>>215.5 tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 488 && acval <= 525)
{
Serial.println("Voltage is around 220V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //tapper3
digitalWrite(relay4, 0); //220>>220.1 tapper 4
digitalWrite(relay5, 1); //tapper 5
}

else if (acval >= 500 && acval <= 535)
{
Serial.println("Voltage is around 222V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 0); //222>220.2 tapper 5
}

else if (acval >= 507 && acval <= 542)
{
Serial.println("Voltage is around 225V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //170 >>192.4 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 0); //tapper 5
}

else if (acval >= 511 && acval <= 536)
{
Serial.println("Voltage is around 228V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //170 >>192.4 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 0); //228>>217.6 tapper 5
}

else if (acval >= 537 && acval <= 552)
{
Serial.println("Voltage is around 230V ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 0); //230>>219.3 tapper 5
}

else if (acval >= 580)
{
Serial.println("Voltage is more than 230V .Warning!! ");
digitalWrite(relay1, 1); //tapper 1
digitalWrite(relay2, 1); //tapper 2
digitalWrite(relay3, 1); //170 >>192.4 tapper3
digitalWrite(relay4, 1); //tapper 4
digitalWrite(relay5, 1); //tapper 5
}
}