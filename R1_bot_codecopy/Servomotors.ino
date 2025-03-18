#include <lx16a-servo.h>

// Define the number of servos and their IDs
#define NUM_SERVOS 6
uint16_t servoIDs[NUM_SERVOS] = {1, 2, 3, 4, 5, 6};

// Create an array of LX-16A Servo objects
lx16a-servo servos[NUM_SERVOS];

void setup() {
  Serial.begin(115200);

  // Initialize each servo
  for (int i = 0; i < NUM_SERVOS; i++) {
    servos[i].begin(servoIDs[i], Serial);
    delay(100); // Allow time for initialization
  }
}

void loop() {
  // Move each servo to a different position
  for (int i = 0; i < NUM_SERVOS; i++) {
    // Set the target position for each servo
    uint16_t targetPosition = map(i, 0, NUM_SERVOS - 1, 100, 900);
    servos[i].moveTimeWrite(targetPosition, 500);
    delay(500); // Add a delay between servo movements
  }
}
