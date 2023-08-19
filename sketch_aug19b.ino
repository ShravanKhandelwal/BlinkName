const int ledPin = 13;      // LED Pin Number
const int buttonPin = 4;    // Push Button Pin Number

bool buttonState = false;
bool lastButtonState = false;

void setup() {
  pinMode(ledPin, OUTPUT);        // Setting the LED pin as OUTPUT
  pinMode(buttonPin, INPUT);      // Setting the button pin as INPUT
}

void loop() {
  buttonState = digitalRead(buttonPin);    // Read the button state
  Serial.print(buttonState);

  if (buttonState != lastButtonState) {    // Check if button state has changed
    if (buttonState == HIGH) {             // Check if button is pressed
      char msg[] = "SHRAVAN";              // Message to transmit
      int mesgLength = strlen(msg);

      for (int i = 0; i < mesgLength; i++) {
        char x = toupper(msg[i]);

        switch (x) {
           case 'A':
            blinking_func(".-");
            break;
             case 'B':
            blinking_func("-...");
            break;
             case 'C':
            blinking_func("-.-.");
            break;
             case 'D':
            blinking_func("-..");
            break;
             case 'E':
            blinking_func(".");
            break;
             case 'F':
            blinking_func("..-.");
            break;
             case 'G':
            blinking_func("--.");
            break;
          case 'H':
            blinking_func("....");
            break;
             case 'I':
            blinking_func("..");
            break;
             case 'J':
            blinking_func(".---");
            break;
             case 'K':
            blinking_func("-.-");
            break;
             case 'L':
            blinking_func(".-..");
            break;
             case 'M':
            blinking_func("--");
            break;
             case 'N':
            blinking_func("-.");
            break;
             case 'O':
            blinking_func("---");
            break;
             case 'P':
            blinking_func(".--.");
            break;
             case 'Q':
            blinking_func("--.-");
            break;
             case 'R':
            blinking_func(".-.");
            break;
             case 'S':
            blinking_func("...");
            break;
             case 'T':
            blinking_func("-");
            break;
             case 'U':
            blinking_func("..-");
            break;
             case 'V':
            blinking_func("...-");
            break;
             case 'W':
            blinking_func(".--");
            break;
             case 'X':
            blinking_func("-..-");
            break;
             case 'Y':
            blinking_func("-.--");
            break;
             case 'Z':
            blinking_func("--..");
            break;
        }

        delay(3000); // Space between letters
      }

      delay(1000); // Space between message repetitions
    }

    lastButtonState = buttonState;    // Update last button state
  }
}

// Implementing the Function For Blinking
void blinking_func(const char* Morsecode) {
  for (int i = 0; Morsecode[i]; i++) {
    if (Morsecode[i] == '.') {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(400);
    } 
    else if (Morsecode[i] == '-') {
      digitalWrite(ledPin, HIGH);
      delay(1800);
      digitalWrite(ledPin, LOW);
      delay(400);
    }
  }
}
