void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
}


  // DOT AND DASH FUNCTIONS


  void dot()
  {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(400);
    digitalWrite(LED_BUILTIN,LOW);
    delay(1200);
  }

  void dash()
  {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(800);
    digitalWrite(LED_BUILTIN,LOW);
    delay(1200);
  }

void loop() {


  // MY Name-->SHRAVAN

  // Blink For Letter S
  dot();
  dot();
  dot();
  delay(1500);

  // Blink For Letter H
   dot();
  dot();
  dot();
  dot();
  delay(1500);

   // Blink For Letter R
   dot();
   dash();
   dot();
    delay(1500);

     // Blink For Letter A
     dot();
     dash();
     delay(1500);

    // Blink For Letter V
      dot();
  dot();
  dot();
     dash();
     delay(1500);

     
    // Blink For Letter N

     dash();
    dot();
     delay(20000);


}
