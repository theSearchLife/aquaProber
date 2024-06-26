//AquaProber Config
#ifndef AP_CONFIG_H
#define AP_CONFIG_H

// General
#define LOGGING_DELAY       60000 // 1minute
#define SERIAL_BAUD_RATE    115200

//Pinout
#define SD_SCK  18
#define SD_MISO 19
#define SD_MOSI 23
#define SD_CS   5 //Thing plus C

#define I2C_SDA 21
#define I2C_SCL 22

#define RGB_LED_PIN     2

#define QWIIC_POWER_PIN 0

//I2C addresses
#define ADDR_MAX17048   0x36
#define ADDR_ADS1115_1  0x48
#define ADDR_EZO_EC     0x64
#define ADDR_EZO_RTD    0x66
#define ADDR_MS5803     0x76

//Neopixel
#define COLOR_ORDER GRB
#define CHIPSET     WS2812
#define NUM_LEDS    1
#define BRIGHTNESS  25

#endif //AP_CONFIG_H