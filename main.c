#include <kipr/botball.h>
#include <stdio.h>

int main()
{
   /* motor(0, 100);
    motor(1, 100); 
    msleep(4800);
     motor(0, -90); //changed from -100
    motor(1, 90); // changed from 100
     msleep(780);
     motor(0, 100);
    motor(1, 100); 
    msleep(2800); 
     motor(0, -100);
    motor(1, 100);
     msleep(630);
    */
    int counter=0;
    int lightval=0;
    float delta=0; 
       float gain=0.1; 
     while (counter < 10000)
     {
         counter=counter+5;
 
         msleep(5); 
         lightval=analog (0); 
         delta=lightval-3150; 
         motor(0, 50+(delta*gain)); 
         motor(1, 50-(delta*gain)); 
         
         /*printf("Left motor value: %f\n", 50+(delta*gain));
         printf("Right motor value: %f\n", 50-(delta*gain));
         */
         
         /* 
      if (analog (0) > 3300) // take out 
      {
        motor(0, 5); 
        motor(1, 65); 
    }
    else 
    { 
        motor(0, 65); 
        motor(1, 5); 
    }
    */
}
    //motor(0, -100);
    //motor(1, 100);
    //msleep(800); 
    motor(0, -45);
    motor(1, 45);
    msleep(1000);
    motor(0, 100); 
    motor(1, 100); 
    msleep(1000); 
    motor(0, -45);
    motor(1, 45);
    motor(0, 0); // program ends
    motor(1, 0); // program ends
    return 0;
}
