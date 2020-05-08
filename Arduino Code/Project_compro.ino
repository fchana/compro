#include <TridentTD_LineNotify.h>
#include <LiquidCrystal.h>
#include <Time.h>
#define SSID "Ann_2.4G"
#define PASSWORD "0653528295"
#define LINE_TOKEN "GdepKQNOvpgArxrv6YnaqAtQZ4mX950CjZPN80sXzU6"
LiquidCrystal lcd(D1, D2, D3, D4, D5, D6);
float voMeasured = 0;
float calcVoltage = 0;
float dustDensity = 0;
int timezone = 7 * 3600;
int dst = 0;
String hou = "0";
String minu = "0";
String sec = "0";
String date = "0";
String mon = "0";

void setup(){
  lcd.begin(20, 4);
  pinMode(D0,OUTPUT);
  Serial.begin(9600); Serial.println();
  Serial.println(LINE.getVersion());
  WiFi.begin(SSID, PASSWORD);
  Serial.printf("WiFi connecting to %s\n", SSID);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(400);
}
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());
  LINE.setToken(LINE_TOKEN);
  configTime(timezone, dst, "pool.ntp.org", "time.nist.gov");
  Serial.println("\nLoading time");
  while (!time(nullptr)) {
  Serial.print("*");
  delay(1000);
  }

  Serial.println("");
  }
  
void loop(){
  //configTime(timezone, dst, "pool.ntp.org", "time.nist.gov"); //
  time_t now = time(nullptr);
  struct tm* p_tm = localtime(&now);
  digitalWrite(D0,LOW);
  voMeasured = analogRead(A0);
  digitalWrite(D0,HIGH);
  calcVoltage = voMeasured * (3.3 / 1024);
  dustDensity = 0.17 * calcVoltage - 0.1;
  if(dustDensity < 0){
    dustDensity = 0;
  }
  Serial.print(" - Dust Density: ");
  Serial.print(dustDensity*1000);
  Serial.println(" μg/m3");
  String hou = String(p_tm->tm_hour);
  String minu = String(p_tm->tm_min);
  String sec = String(p_tm->tm_sec);
  if(int(p_tm->tm_hour) < 10){
    hou = "0" +  String(p_tm->tm_hour);
  }
  if(int(p_tm->tm_min) < 10){
    minu = "0" +  String(p_tm->tm_min);
  }
  if(int(p_tm->tm_sec) < 10){
    sec = "0" +  String(p_tm->tm_sec);
  }
  if(int(p_tm->tm_mday) < 10){
    date = "0" +  String(p_tm->tm_mday);
  }
  if(int(p_tm->tm_mon) < 10){
    mon = "0" +  String(p_tm->tm_mon);
  }  
  if(dustDensity*1000 >= 100){
  LINE.notify(String(dustDensity*1000) + " μg/m3\n" + 
  "Date : " + String(date + "/" + mon + "/" + String(p_tm->tm_year + 2443) + "\n") + 
  "Time : " + hou + ":" + minu + ":" + sec);
  }
  if(String(String(p_tm->tm_hour) + ":" + String(p_tm->tm_min) + ":" + String(p_tm->tm_sec)) == "12:0:0" or String(String(p_tm->tm_hour) + ":" + String(p_tm->tm_min) + ":" + String(p_tm->tm_sec)) == "6:0:0"){
  LINE.notify(String(dustDensity*1000) + " μg/m3\n" + 
  "Date : " + String(date + "/" + mon + "/" + String(p_tm->tm_year + 2443) + "\n") + 
  "Time : " + hou + ":" + minu + ":" + sec);
  }
  lcd.setCursor(0, 0);
  lcd.print("Dust Density :");
  lcd.setCursor(0, 1);
  lcd.print(String(dustDensity*1000) + " ug/m3");
  lcd.setCursor(0, 2);
  lcd.print("Date : " + String(date + "/" + mon + "/" + String(p_tm->tm_year + 2443)));
  lcd.setCursor(0, 3);

  lcd.print("Time : " + hou + ":" + minu + ":" + sec);
  delay(1000);
}
