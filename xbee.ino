#include <Zumo32U4.h>
Zumo32U4Motors motors;

String letter;

void setup() {
  Serial1.begin(9600); //de seriele poort te openen.
}

void loop() {

  letter = Serial1.readString(); //Voor het inlezen van de input en deze input in de variabele letter stoppen.

  if(letter.indexOf("w") == 0){ //Als de letter w ingevoerd word wordt het onderstaande uitgevoerd.
  motors.setSpeeds(100, 100);
  Serial.println("Vooruit");
  }

  if(letter.indexOf("s") == 0){ //Als de letter s ingevoerd word wordt het onderstaande uitgevoerd.
  motors.setSpeeds(-100, -100);
  Serial.println("Achteruit");
  }

  if(letter.indexOf("p") == 0){ //Als de letter p ingevoerd word wordt het onderstaande uitgevoerd.
  motors.setSpeeds(0, 0);
  Serial.println("Stop");
  }

  if(letter.indexOf("a") == 0){ //Als de letter a ingevoerd word wordt het onderstaande uitgevoerd.
  motors.setSpeeds(0, 100);
  delay(2050);
  motors.setSpeeds(0,0);
  Serial.println("Links");
  }

  if(letter.indexOf("d") == 0){ //Als de letter d ingevoerd word wordt het onderstaande uitgevoerd.
  motors.setSpeeds(100, 0);
  delay(2050);
  motors.setSpeeds(0,0);
  Serial.println("Rechts");
  }
}  

//indexOf is voor welke positie de letter heeft die jij zoekt.
//0 staat voor de eerste letter in de string als deze overeenkomt met "..." dan wordt de code uitgevoerd.
