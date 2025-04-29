#include<reg51.h>
#include<stdio.h>
#define DLY 1000  // IMP  SMALL STEEPER MOTOR
  #define STEP  260    // IMP  APPROXIMATE 180 DEGREE - ok
  sfr PORT_P2  = 0xA0;

sbit STEPPER_D0 = P2 ^ 7;
sbit STEPPER_D1 = P2 ^ 6;
sbit STEPPER_D2 = P2 ^ 5;
sbit STEPPER_D3 = P2 ^ 4;

void main()
{
  
  unsigned int i;
  unsigned int j;
  PORT_P2  = 0xFF;

  while(1)
   {

       for( j=0; j<=STEP; j++) // FORWARD DIRECTION ROTATION
    {
           for(i=0; i<=DLY; i++); 
           STEPPER_D0 = 0;       STEPPER_D1 = 1;
           STEPPER_D2 = 1;       STEPPER_D3 = 1;
           for(i=0; i<=DLY; i++);   
           STEPPER_D0 = 1;       STEPPER_D1 = 0;
           STEPPER_D2 = 1;       STEPPER_D3 = 1;
           for(i=0; i<=DLY; i++);   
           STEPPER_D0 = 1;       STEPPER_D1 = 1;
           STEPPER_D2 = 0;       STEPPER_D3 = 1;
           for(i=0; i<=DLY; i++);   
           STEPPER_D0 = 1;       STEPPER_D1 = 1;
           STEPPER_D2 = 1;       STEPPER_D3 = 0; 
   //        for(i=0; i<=DLY; i++);   
  //        STEPPER_D0 = 1;       STEPPER_D1 = 1;
   //        STEPPER_D2 = 1;       STEPPER_D3 = 1;
    }
      do
           {
           }while(1);     

   } 


   }