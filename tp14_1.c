#include<stdio.h>

int main(int argc, char const *argv[])
{
     unsigned int x;
    
    x=0xD57F1347;
    
    printf("X in decimal : %u\n",x);
    printf("LSL by 4 : %x\n",x<<4);
    printf("LSL by 4 : %d\n",x<<4);    
    printf("LSL by 4 : %d\n",x<<4);    
    printf("X in decimal : %d\n",x);   // Print the value of x in negative : interpreting the result of left-shifting x as a signed integer when printing it using %d format specifier.
    printf("X in decimal : %u\n",x);   //Print positive 

    return 0;
}

//the expressions x << 4 are evaluated independently each time they are encountered. The value of x itself does not change throughout the program.

//X in decimal : 3581875015
//LSL by 4 : 57f13470
//LSL by 4 : 1475425392
//LSL by 4 : 1475425392
//X in decimal : -713092281
//X in decimal : 3581875015



// $ ./tp14_1 
// LSL by 4 : 57f13470
// LSL by 4 : 1475425392
// X in decimal : -713092281

