#include <LiquidCrystal_I2C.h>
#include <VirtualWire.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
#include <Wire.h>
#include "Wire.h"
int show=0;
#include "dht.h"
#define dht_apin 2 
int gas=3;
int buz=7;
int sw=8;
dht DHT;
void setup()
{
  Serial.begin(9600);    // Debugging only
  Serial.println("setup");
    // Initialise the IO and ISR
    vw_setup(2000);  // Bits per sec
    vw_set_tx_pin(6); //Transmitter Data Pin to Digital Pin 6
  lcd.begin();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.clear();
  pinMode(gas,INPUT);
  pinMode(sw,INPUT_PULLUP);
  pinMode(buz,OUTPUT);
  digitalWrite(buz,HIGH);
  lcd.setCursor(0,0);
  lcd.print("Wireles Surveila");
  lcd.setCursor(0,1);
  lcd.print("& Safety System");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("For Mine Workers");
  lcd.setCursor(0,1);
  lcd.print("    Using RF    ");
  delay(3000);
  
}
void loop(){
  DHT.read11(dht_apin);
  int a=digitalRead(gas);
  int b=digitalRead(sw);
  float tem=DHT.temperature;
  int hum=DHT.humidity;
  lcd.clear();
  lcd.setCursor(0,0);   //Set cursor to character 2 on line 0
  lcd.print("TEMP");
  lcd.setCursor(5,0);   //Move cursor to character 2 on line 1
  lcd.print("HUM");
  lcd.setCursor(10,0);   //Set cursor to character 2 on line 0
  lcd.print("GAS");
  lcd.setCursor(14,0);   //Move cursor to character 2 on line 1
  lcd.print("SW");
  lcd.setCursor(0,1);   //Set cursor to character 2 on line 0
  lcd.print(tem);
  lcd.setCursor(5,1);   //Move cursor to character 2 on line 1
  lcd.print(hum);
  lcd.setCursor(10,1);   //Set cursor to character 2 on line 0
  lcd.print(a);
  lcd.setCursor(14,1);   //Move cursor to character 2 on line 1
  lcd.print(b);
  if(tem >= 37){ 
  digitalWrite(buz,LOW);
  char *msg2 = "1";//send 1 to the receiver
    digitalWrite(13, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, strlen(msg2));//send the byte to the receiver
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(13, LOW);
  }
  else if(a == LOW){ 
  digitalWrite(buz,LOW);
  char *msg2 = "2";//send 1 to the receiver
    digitalWrite(13, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, strlen(msg2));//send the byte to the receiver
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(13, LOW);
  }
   else if(b == LOW){ 
  char *msg2 = "3";//send 1 to the receiver
    digitalWrite(13, HIGH); // Flash a light to show transmitting
    vw_send((uint8_t *)msg2, strlen(msg2));//send the byte to the receiver
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(13,LOW);
  }
   else{ 
  digitalWrite(buz,HIGH);
  }
  delay(1000);
  }
