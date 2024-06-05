#include<stdio.h>

//From RIGHT --------> LEFT

void bitPattern1(unsigned int num)
{

   int i=0;
   printf("Bit Pattern : ");

   for(i=sizeof(num)*8-1;i>=0;i--)
   {

      if(num & (1u<<i))
        printf("1");

      else
        printf("0");

    
    if (i%4==0)
    {
        printf(" ");
    }
    
   }


}



//from Left to right ===>>> code will not work , it will print in reverse order LSB <=> MSB


// void bitPattern2(unsigned int num)
// {

//     int i;

//   printf("\n");
//   printf("BIT PATTERN : ");

//   for(i=0;i<=((sizeof(num)*8))-1;i++)
//   {


//     if(num & (1u<<i))
//         printf("1");

//     else
//         printf("0");


//     if(i%4==0)
//         printf(" ");
      

//   }

//}







int main(int argc, char const *argv[])
{
    unsigned int num = 0x1254F;

    printf("Size of num : %ld\n",sizeof(num));    

    bitPattern1(num);
    bitPattern2(num);

    return 0;
}
