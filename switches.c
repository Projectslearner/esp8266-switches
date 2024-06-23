/*
    Project name : ESP8266 Switches
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-switches
*/

// Define the GPIO pin connected to the push button
const int buttonPin = D1;

void setup()
{
  Serial.begin(9600); // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the button
  int buttonState = digitalRead(buttonPin);

  // Print the button state to the Serial Monitor
  Serial.print("Button State: ");
  Serial.println(buttonState);

  delay(100); // Add a small delay to debounce the button
}
