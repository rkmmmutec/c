#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y;

    printf("Enter values of x and y : ");
    scanf("%d%d",&x,&y);

    printf("x=%d, y=%d\n",x,y);


    x=x^y;
    y=x^y;
    x=x^y;

    printf("x=%d, y=%d\n",x,y);



    return 0;
}
