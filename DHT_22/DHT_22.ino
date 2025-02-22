// Define the pin connected to the LED (use onboard LED pin, typically GPIO2)
const int ledPin = 2;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for 1000 milliseconds (1 second)
  delay(1000);
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for 1000 milliseconds (1 second)
  delay(1000);
}
