int  tled= 15;    

int bp = 16;   

bool buttonState = 0;      

bool Mode = 0;            



void setup()

{

  pinMode(bp, INPUT);    

  pinMode(tled, OUTPUT);

}



void loop()

{

  if (digitalRead(bp)) 

  {

    if (!buttonState) 

    {

      buttonState = true;

      Mode = !Mode; 

    }

  }

  else buttonState = false;

  digitalWrite(tled , Mode); 

  delay(100);

}
