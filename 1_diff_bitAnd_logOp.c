#include<stdio.h> 

int main(int argc, char const *argv[])
{
    char x=1, y=2 ; 


   printf("Result of x&y is 1: %d\n ", x&y);



   printf("Result of x&y is 1: %d\n ", x&&y);

   printf("------------------\n");


// x=1(0000 0001) , y=2(0000 0010)
// 1&2 =0(0000 0000)
//if(0)

if(x&y)
    printf("--Result of x&y is 1");



// 1&&2 = TRUE && TRUE = TRUE = 1
//if(1)
//Value other than 0 is true
if(x&&y)
    printf("----Result of x&&y is 1");

 
    

    return 0;
}