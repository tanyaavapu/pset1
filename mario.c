#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int heigh;
 do
 {
    heigh=get_int("Positive: ");
 }
 while(heigh<0 || heigh>23);
 for (int i=0;i<heigh;i++)
 { int symbol=heigh-(i+2);

     for(int m=0;m<=symbol;m++)
        {
       printf(" ");
        }

     for(int j=heigh-i;j<=heigh;j++)
     {
           printf("#");
        }
   printf("\n");
     }

 }

