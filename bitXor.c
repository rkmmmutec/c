//Bit wise XOR

//Inclusive OR : same as OR => 0,0 => 0 in other cases : 1
// XOR : output 1 when operand are (0,1)and (1,0) , output=0 when (0,0) and (1,1)
//Excluding both the condition 


//odd number of 1  gives => 1 , even number of 1 => 0


#include<stdio.h>

int main(int argc, char const *argv[])
{

  int a=4 ,b=3;


   printf("1.XOR of 4 and 3 :%d \n",4^3);
   printf("2.XOR of a and b :%d \n",a^b);

   printf("3. a:%d\t b:%d\n",a,b);

    a= a^b;
       printf("4. a:%d b:%d\n",a,b);

    b=a^b;
       printf("5. a:%d b:%d\n",a,b);

    a=a^b;
       printf("6. a:%d b:%d\n",a,b);
       printf("7. After XOR, a=%d and b=%d\n",a,b);

   
    return 0;
}
