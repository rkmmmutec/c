//First operand << second operand
//Whose bits get left shifted, Decide the number of places to shift the bits

//When bits are shifted left then trailing position are filles with zeroes

#include<stdio.h>

int main(int argc, char const *argv[])
{

   // var << 1  : Left shift by 1
   
   // let say var =3 (0000 0011) 

   // 3 = 0000 0011 , 3<< 1 => 0000 0110

    
    // int var =1 ;

    // printf("Value : %d\n",var <<1 );

    char var1 = 3; // 3 = 0000 0011 
                   // 3<<1 = 0000 0110 = 6
    printf("Var1_value : %d\n",var1<<1);


   // Left shifting is equivalent to multicpication by 2^rightOperand


    // var =3 ; var << 1 ; Output : 6 [3x2^1]
    // var =3 ; var << 4 : Output : [3x2^4] = 48

    
    return 0;
}


