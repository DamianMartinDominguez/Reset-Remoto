
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLXaaoJThj"
#define BLYNK_DEVICE_NAME "SerialGateWay"
//#define BLYNK_AUTH_TOKEN "82VkozVSmUrtxeogyxU81BdvAYULBrUi"

#define BLYNK_FIRMWARE_VERSION        "1.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG
#define relay1 12
#define relay2 13

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"



void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();


}

BLYNK_WRITE(V0)
{   
  int value = param.asInt(); // Get value as integer
digitalWrite(relay1, value);
  
}

BLYNK_WRITE(V1)
{   
  int value = param.asInt(); // Get value as integer
digitalWrite(relay2, value);
  
}
