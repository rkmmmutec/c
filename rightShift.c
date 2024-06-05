
//Right shift operator
// Fist operand >> second operand
// Whose bits get right shifted >> Decides number of places to  shift the bits

//When bits are shifted right hen leading positions are filled with zeroes



#include<stdio.h>

int main(int argc, char const *argv[])
{
    char var =3;   // 3=0000 0011
                    // 0000 0011 >> 1 => 0000 0001 = 1


    printf("value : %d\n",var);
    printf("value after right shift : %d\n", var >> 1);


    // Right shifting is equv. to division by 2^rightOperand

    // 3/[2^1] = 1.5 => 1 


    char var1 =32 ;

    printf("value of 32 after, var >>4 : %d\n",var1>>4);

    // 32/[2^4] =2
    //rightShift.c:27:10: error: redefinition of ‘var’
    //char var1 =32 ;
    
    return 0;
}
