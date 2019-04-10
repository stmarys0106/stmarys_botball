#include <kipr/botball.h>
#include <stdio.h>

int main()
{
   // wait_for_light(5);
    shut_down_in(118); 
    
   motor(0, 100); //left motor
    motor(1, 100); //right motor
    msleep(1500); // go for 1.5 seconds
     motor(0, -90); // turn left
    motor(1, 90); // turn left
     msleep(600);// turn left for .6 seconds
     motor(0, 100);//left motor
    motor(1, 100); //right motor
    msleep(3400); //go for 3.4 seconds
     motor(0, 90);//turn right
    motor(1, -90);//turn right
     msleep(680);//turn right for .68 seconds
    motor(0, 90); // left motor 
    motor(1, 90); // right motor
    msleep(1750); //go foward for 1.75 seconds
    motor(0, 90); //turn right 
    motor(1, -90); //turn right
    msleep(600); //tur right for.6 seconds 
   
    printf("start line follow/n");
   
  //start  first line follow 
    int counter=0;
    int lightval=0;
    float delta=0; 
       float gain=0.1; 
     while (counter < 5500)
     {
         counter=counter+5;
 
         msleep(5); 
         lightval=analog (0); 
         delta=lightval-3150; 
         motor(0, 80+(delta*gain)); 
         motor(1, 80-(delta*gain)); 
         
      }
    //end first line follow
  
    motor(0, 30); // turn left
    motor(1, -30);// turn left
    msleep(1800);// turn left for 1.8 seconds
    motor(0, 100); //left
    motor(1, 100); //right
    msleep(1600); //go foward for 1.6 seconds
    motor(0, 30);//turn right
    motor(1, -30);//turn right
    msleep(1500);// turn right for 1.5 seconds
    motor(0, 100); //left
    motor(1, 100); //right
    msleep(1800);// go forward 1.8 seconds
    
	motor(0, -100);// backwards
    motor(1, -100);// backwards
    msleep(4000);// backwards for 4.0 seconds
	motor(0, 45);// turn right
    motor(1, -45);//turn right
    msleep(800);//turn right for .8
    motor(0, 100); //go to blue line and left 
    motor(1, 100); //right
    msleep(3000); //go foward for 3.0
    motor(0, 0); //stop
    motor(1, 0); //stop
    msleep(3000); //stop for 3 seconds
    motor(0, -45); // turn on blue line
    motor(1, 45);//turn left
    msleep(300);// turn left for .5 seconds
     motor(0, 0); //motor stop
    motor(1, 0); // motor stop
    msleep(3000); //stop for 3 seconds
    motor(0, 100); //go on blue line and left
    motor(1, 100);//right
    msleep(1000);//forward for .8 seconds
     motor(0, 0); //motor stop
    motor(1, 0); //motor stop
    msleep(3000); //stop for 3 seconds
    motor(0, -45); //turn left 
    motor(1, 45); //turn left
    msleep(100); //turn for 0.1 seconds
     motor(0, 0); //motor stop
    motor(1, 0); //motor stop
    msleep(3000); //stop for 3 seconds
    motor(0, 45); //move forward
    motor(1, 45); //move forward
    msleep(1500); //move forward for 1 second
     motor(0, 0); //motor stop
    motor(1, 0); //motor stop
    msleep(3000); //stop for 3 seconds
    motor(0, -45); //turn left 
    motor(1, 45); //turn left 
    msleep(200); //turn for .2 seconds
     motor(0, 0); //motor stop
    motor(1, 0); //motor stop
    msleep(3000); //stop for 3 seconds
    motor(0, 45); //move forward
    motor(1, 45); //move forward
    msleep(5500); //move forward for 5.5 seconds 
     motor(0, 0); //motor stop
    motor(1, 0); //motor stop
    msleep(3000); //stop for 3 seconds
   
    motor(0, -45); //turn left
    motor(1, 45); //turn left
    msleep(100); //turn for .1 seconds
        motor(0, 0); //motor stop
    motor(1, 0); //motor stop
    msleep(3000); //stop for 3 seconds
   motor(0, -45); //turn left
   motor(1, 45); //turn left
   msleep(200); //turn left for .2 seconds
  motor(0, 0); //motor stop
  motor(1, 0); //motor stop
  msleep(3000); //stop for 3 seconds
  motor(0, 45); //move forward
  motor(1, 45); //move forward 
  msleep(1500); //move forward for 1.5 seconds
  motor(0, 0); //motor stop
    motor(1, 0); //motor stop
    msleep(3000); //stop for 3 seconds
    
    
   
   /* int counter2=0;
    int lightval2=0;
    float delta2=0; 
       float gain2=0.1; 
     while (counter2 < 5800)
     {
         counter2=counter2+5;
 
         msleep(5); 
         lightval2=analog (0); 
         delta2=lightval2-592.5; 
         motor(0, 80-(delta2*gain2)); 
         motor(1, 80+(delta2*gain2)); 
     }
    
    */
     motor(0, -90); // turn left
    motor(1, 90); //turn left 
    msleep(600); //turn left for .6 seconds
    motor(0, 90);//left
    motor(1, 90);//right 
    msleep(2800); // go forward 2.8
    motor(0, -90);// turn left 
    motor(1, 90); //turn left
    msleep(600); //turn left for .6 seconds
    motor(0, 90);//left
    motor(1, 90);//right 
    msleep(1100); // go foward for 1.1
    return 0;
   
   
}
