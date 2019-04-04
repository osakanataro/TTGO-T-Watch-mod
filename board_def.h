
#ifndef __BOARD_DEF_H
#define __BOARD_DEF_H

// #define __DEBUG

// #include "gpio.h"
#if 0
#define TFT_MISO    -1
#define TFT_MOSI    19
#define TFT_SCLK    18
#define TFT_CS      5
#define TFT_DC      23
#define TFT_RST     27
#define TFT_BL      25  // LED back-light

#define TP_INT      35//N/A

#define SD_CMD      15
#define SD_DATA0    2
#define SD_DATA1    4
#define SD_DATA2    12
#define SD_DATA3    13

#define I2C_SDA     21  //TP_SDA
#define I2C_SCL     22  //TP_SCL

#define SEN_SDA     14
#define SEN_SCL     15

#define BMA423_INT1 39
#define BMA423_INT2 32

#define GPS_TX      33
#define GPS_RX      34
#define GPS_PWD     26
#define GPS_BANUD_RATE 115200

#define AXP202_INT  12

#define AMP_PWD     5

#define USER_BUTTON 36
#else


#define TFT_MISO            23
#define TFT_MOSI            19
#define TFT_SCLK            18
#define TFT_CS              5
#define TFT_DC              27
#define TFT_RST             -1
#define TFT_BL              2

#define SD_CS               25
#define SD_MISO             23
#define SD_MOSI             19
#define SD_SCLK             18
#define SD_DETECT           -1

#define TP_INT              35


#define SD_CMD      -1
#define SD_DATA0    -1
#define SD_DATA1    -1
#define SD_DATA2    -1
#define SD_DATA3    -1

#define I2C_SDA             14
#define I2C_SCL             15

#define SEN_SDA             21
#define SEN_SCL             22

#define AXP202_INT          13
#define BMA423_INT1         39
#define BMA423_INT2         32

#define GPS_TX              33
#define GPS_RX              34
#define GPS_PWD             -1
#define GPS_BANUD_RATE      115200

#define S7XG_TX             33
#define S7XG_RX             34
#define S7XG_GPS_RST        12

#define USER_BUTTON         36

#endif

#endif