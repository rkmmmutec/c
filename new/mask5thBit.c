#include<stdio.h>


void displayBits(unsigned int);


int main(int argc, char const *argv[])
{
    unsigned int mask = 0x20;

    unsigned int num = 0xFFFFFF2F;

// Masking using bitwise AND 
// MASKING USING BITWISE AND :: TO TEST A PARTICULAR BIT IS ON or OFF

    if((num & mask)==0)
        printf("5th bit is OFF\n");

    else
        printf("5th bit is ON\n");


        unsigned int num2=0xFFFFFF0F;

    if((num2 & mask)==0)
        printf("5th bit is OFF\n");

    else
        printf("5th bit is ON\n");

    int bit=0;

//NUM:1

     if((num & mask)==0)
        bit=0;
    else
        bit=1;
   
     printf("Method1: Bit value is %d\n",bit);


     bit=(num&mask)?1:0;

     printf("Method2: Bit value is %d\n",bit);


     bit=(num&mask)>>5;

     printf("Method3: Bit value is %d\n",bit);
    



//NUM2

     if((num2 & mask)==0)
        bit=0;
    else
        bit=1;
   
     printf("Method1: Bit value is %d\n",bit);


     bit=(num2&mask)?1:0;

     printf("Method2: Bit value is %d\n",bit);


     bit=(num2&mask)>>5;

     printf("Method3: Bit value is %d\n",bit);
    

// MASKING USING BITWISE OR :: TO SET A PARTICULAR BIT using mask


unsigned int mask2 = 0x20 ;

unsigned int num3= 0xFFFFF0F;


num3 = num3 | mask2;

int bit5;

bit5= (num3>>5) ?1 : 0;  //To check 5th bit is set or not

if(bit5==1)
    printf("M1:5th bit is set\n");
else
    printf("M1:5Th bit is Unset\n");


printf("Num3: %x\n",num3);




//MASKING USING BITWISE XOR


//Before toggling

printf("Before toggling : %x\n",num3);

displayBits(num3);

num3 = num3 ^ 0x20;

printf("After Toggling: %x\n",num3);

displayBits(num3);



    return 0;
}



void displayBits(unsigned int num)
{

   for(int i= sizeof(num)*8 -1 ; i>=0 ; i--)
   {

      if(num & (1u<<i))
        printf("1");

      else
        printf("0");


     if(num%8==0)
        printf(" ");

   }
   
printf("\n");
    
   
}