#include <stdio.h>


void displayBits(int x)
{

   int i;

  for(i=sizeof(x)*8-1 ; i>=0 ; i-- )
  {

      if(x&(1u<<i))
        printf("1");

     else
        printf("0");

     if(i%4==0)
        printf(" ");   

    

  }




}






int main(int argc, char const *argv[])
{
    
    
    int x =12345;

    displayBits(x);

    return 0;
}
