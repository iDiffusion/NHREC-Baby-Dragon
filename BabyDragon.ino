#include <Servo.h>   // need three 0.15 inch diameter 0.5 inch long springs
 
Servo leftEar; //create servo to control left ear 
Servo rightEar; //create servo to control right ear
Servo leftEye; //create servo to control left eye
Servo rightEye; //create servo to control right eye
Servo mouth; //create servo to control mouth
Servo toungue; //create servo to control toungue

void setup() 
{ 
  leftEar.attach(3); //Left Ear 
  rightEar.attach(6); //Right Ear
  
  mouth.attach(5); //Mouth
  tounge.attach(9); //Tounge
  
  leftEye.attach(10); //Left Eye
  rightEye.attach(11); //Right Eye
} 
 
void loop()
{
    // Open Both Eyes
    leftEye.write(40); //Open Left Eye
    rightEye.write(40); //Open Right Eye
    delay(3000); //Wait 3 sec
    
    // Blink Both Eyes
    leftEye.write(120); //Close Left Eye
    rightEye.write(120); //Close Right Eye
    delay(1000); //Wait 1 sec
    
    leftEye.write(40); //Open Left Eye
    rightEye.write(40); //Open Right Eye
    delay(3000); //Wait 3 sec
    
    // Yawn
    mouth.write(100); //Open Mouth
    delay(500);//Wait 

    toungue.write(0; //Stick toungue out  
    leftEye.write(120);
    rightEye.write(120);
    delay(2000);
    
    mouth.write(180);
    delay(100);
    
    leftEye.write(40);
    rightEye.write(40);
    delay(5000);

    // Open Mouth and stick tounge out
    mouth.write(100);     // Open Mouth
    tounge.write(0);       // Tounge Out
    delay(500);            // Wait 0.5s
    tounge.write(250);     // Tounge In
    delay(500);            // Wait
    mouth.write(180);     // Close Mouth
    delay(3000);           // Wait 3s
    
    // Ears
    leftEar.write(90);
    rightEar.write(10);
    delay(750);
    
    leftEar.write(70);
    rightEar.write(30);
    delay(500);
    
    leftEar.write(90);
    rightEar.write(10);
    delay(2000);
    
    rightEar.write(30);
    delay(350);
    
    rightEar.write(10);
    delay(3500);
    
    // Talk
    mouth.write(100);
    tounge.write(0);
    delay(250);
    
    mouth.write(180);
    tounge.write(250);
    delay(500);
    
    mouth.write(100);
    delay(350);
    
    mouth.write(180);
    delay(500);
    
    mouth.write(100);
    delay(350);
    
    mouth.write(180);
    delay(1500);
    
    // Close Eyes
    leftEye.write(120);
    rightEye.write(120);
    delay(10000);
} 
