#include <WiFi.h>
#include <WiFiUdp.h>

const char* ssid="esp-audio";
const char* password="12345678";

WiFiUDP udp;

const int udpPort=5000;

#define DAC_PIN 25

void setup(){

Serial.begin(115200);

WiFi.mode(WIFI_STA);

WiFi.begin(ssid,password);

while(WiFi.status()!=WL_CONNECTED)
delay(500);

udp.begin(udpPort);

}

void loop(){

uint8_t packet[240];

if(udp.parsePacket()==240){

udp.read(packet,240);

for(int i=0;i<120;i++){

int16_t sample=packet[i*2]|(packet[i*2+1]<<8);

uint8_t dac=(sample>>8)+128;

dacWrite(DAC_PIN,dac);

delayMicroseconds(63);

}

}

}
