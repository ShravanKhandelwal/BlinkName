// Define the pin numbers for LED and push button
const int ledPin = 13;      // LED Pin Number
const int buttonPin = 4;    // Push Button Pin Number

bool buttonState = false;         // Current state of the button
bool lastButtonState = false;     // Previous state of the button

void setup() {
  pinMode(ledPin, OUTPUT);        // Set the LED pin as OUTPUT hello
  pinMode(buttonPin, INPUT);      // Set the button pin as INPUT
}

void loop() {
  buttonState = digitalRead(buttonPin);    // Read the current button state
  Serial.print(buttonState);                // Print the buttonhhssh state to Serial (debugging)

  // Check if button state has changed
  if (buttonState != lastButtonState) {
    // Check if button is pressed (transition from LOW to HIGH)
    if (buttonState == HIGH) {
      char msg[] = "SHRAVAN";              // Message to transmit
      int mesgLength = strlen(msg);

      // Loop through each character in the message
      for (int i = 0; i < mesgLength; i++) {
        char x = toupper(msg[i]);

        // Translate characters to Morse code and blink LED accordingly
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

    lastButtonState = buttonState;    // Update the last button state
  }
}

// Function to blink LED according to Morse code
void blinking_func(const char* Morsecode) {
  for (int i = 0; Morsecode[i]; i++) {
    if (Morsecode[i] == '.') {
      digitalWrite(ledPin, HIGH);    // Turn LED on for dot
      delay(500);
      digitalWrite(ledPin, LOW);     // Turn LED off
      delay(400);                     // Pause between dots and dashes
    } 
    else if (Morsecode[i] == '-') {
      digitalWrite(ledPin, HIGH);    // Turn LED on for dash
      delay(1800);
      digitalWrite(ledPin, LOW);     // Turn LED off
      delay(400);                     // Pause between dots and dashes
    }
  }
}
