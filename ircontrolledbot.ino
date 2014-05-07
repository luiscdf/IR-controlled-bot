#include <IRremote.h>      //Inclui IRremote Lib1
#include <IRremoteInt.h>   //Inclui IRremote Lib2
#include <Servo.h>         //Inclui Servo Library 


Servo leftServo;           //Cia o objecto leftServo (servo esquerdo)
Servo rightServo;          //Cia o objecto rightServo (servo direito)



void setup() 
{
  leftServo.attach(9);        //Left servo ligado ao pino 9
  leftServo.write(90);        //Escreve a posição neutra deste servo
  rightServo.attach(8);       //Right servo ligado ao pino 8
  rightServo.write(90);       //Escreve a posição neutra deste servo
} 


void loop()
{






  // Movimentos dos servos (a definir se ok (consuante a lib))


  void moveBackward(){
    rightServo.write(180);
    leftServo.write(0); 
  }

  void moveForward(){
    rightServo.write(0);
    leftServo.write(180);
  }

  void moveRight(){
    rightServo.write(0);
    leftServo.write(0);  
  }

  void moveLeft(){
    rightServo.write(180);
    leftServo.write(180);
  }

  void moveStop(){
    rightServo.write(90);
    leftServo.write(95); 
  }






}
