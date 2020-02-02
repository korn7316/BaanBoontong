const int bp = 16;     // the number of the pushbutton pin

const int lp =  19;      // the number of the LED pin


int buttonState = 0;         // variable for reading the pushbutton status



void setup() {

  // initialize the LED pin as an output:

  pinMode(lp, OUTPUT);

  // initialize the pushbutton pin as an input:

  pinMode(bp, INPUT);

}



void loop() {



  buttonState = digitalRead(bp);



  

  if (buttonState == HIGH) {

    // turn LED on:

    digitalWrite(lp, HIGH);

  } else {

    // turn LED off:

    digitalWrite(lp, LOW);

  }

}
