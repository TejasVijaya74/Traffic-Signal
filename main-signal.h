#ifndef TRAFFIC_H
#define TRAFFIC_H

// Pin definitions
#define CAR_RED_PIN    25  // Pin for Car Red LED
#define CAR_YELLOW_PIN 26  // Pin for Car Yellow LED
#define CAR_GREEN_PIN  27  // Pin for Car Green LED
#define PED_RED_PIN    14  // Pin for Pedestrian Red LED
#define PED_GREEN_PIN  12  // Pin for Pedestrian Green LED

// Duration definitions (in milliseconds)
#define GREEN_CAR_DURATION  5000  // Duration for car green light
#define YELLOW_CAR_DURATION 2000  // Duration for car yellow light
#define GREEN_PED_DURATION  5000  // Duration for pedestrian green light
#define FLASH_YELLOW_COUNT  3      // Number of flashes for yellow light before green

// Function Prototypes

/**
 * @brief Initializes the traffic signal system by setting up the LED pins as outputs.
 */
void setupTrafficSignal(void);

/**
 * @brief Controls the traffic signal, managing the light sequences.
 */
void controlTrafficSignal(void);

#endif // TRAFFIC_H
