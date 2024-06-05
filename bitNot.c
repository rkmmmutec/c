//Bitwise not


#include<stdio.h>

#include<limits.h>

int main(int argc, char const *argv[])
{

   int a=5;

  int b=~a;

    //~a= -(a+1)

   printf("vAlue b : %d\n",b);

   int x=10;

   int y=~x;

   // y= -(10+1)=-11

   printf("value y : %d\n",y);
   printf("value y : %ld\n",sizeof(y)*CHAR_BIT);


    return 0;
}
