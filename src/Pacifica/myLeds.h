#define LED_PIN     D1
#define LED_TYPE    WS2811
#define COLOR_ORDER RGB
#define BRIGHTNESS  50
const int NUM_TOP =  20;            //The number of LEDS in the tree topper
const int NUM_LEDS = 777;           //The last 20 LEDS make up the topper.



// if you define max mA, the driver will dim the LEDs to avoid going over.
// Put this line after .addleds
// FastLED.setMaxPowerInVoltsAndMilliamps( VOLTS, MAX_MA);
// Causes flicker??
#define VOLTS 12
#define MAX_MA 15000
