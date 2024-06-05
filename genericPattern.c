#include <stdio.h>


void displayBits(unsigned int a)
{

  int i;

for(i=sizeof(a)*8 -1 ; i>=0 ; i--)
{
    if(a & (1u<<i))
    printf("1");

    else
    printf("0");

    if(i%8==0)
    printf(" ");

}
printf("\n");

}




int main(int argc, char const *argv[])
{

    unsigned int x= 0xFFFFFFF0;

    unsigned int y= 0xF;

    unsigned int z= ~0xF;


    unsigned int a= 0xFFFFFFFF;

     unsigned int b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;

    b= a & 0xF;
    c= a & ~0xF;




     printf("x="); displayBits(x);
     printf("y="); displayBits(y);
     printf("z=");displayBits(z);
     printf("b="); displayBits(b);
     printf("c="); displayBits(c);
   
     d= 0x124; printf("d="); displayBits(d);
     e=~d;      printf("e="); displayBits(e);


     f=0x20; printf("f="); displayBits(f);
     g=~0x20; printf("g="); displayBits(g);


     printf("Bit pattern => 0x12345\t"); displayBits(0x12345);

     int mask = 0x20 ; printf("mask="); displayBits(mask);

     int pattern = 0x30; printf("pattern="); displayBits(pattern);

     //To check the 5th bit of pattern is zero ??
        int result = mask & pattern ; printf("result ="); displayBits(result);
     if((mask & pattern)!=0)
        printf("5th Bit is set\n");
     else
        printf("5th Bit is not set\n");

    //To check the 4th bit of pattern is 
    
     int mask1 =0x10;
     
     if((mask1 & pattern)!=0)
        printf("4th bit is set\n");
    else    
        printf("4th bit is not set\n");

    // Check 3rd bit

    int mask2 =0x4; printf("mask2="); displayBits(mask2);


    mask = 0x20;
    //USE BELOW STATEMENT TO CHECK ===== METHOD 1
    if((x&mask)==0)
        printf("5th bit is off\n");

    else
        printf("5th bit is on\n");

    int bit;
    
    bit=(x&mask) ?1:0;

    printf("---BIT Value="); printf("%x\n",bit);


    mask = 0x02;
        if((x&mask)==0)   //Testing second bit is off
        printf("Second bit is off\n");

        else
        printf("Second bit is on\n");

        //METHOD 2

        bit =(x&mask)>>5;
        printf("By (x&mask)>>5 :bit="); displayBits(bit);

        bit=(x&mask) ?1:0;
        printf("BIT Value="); printf("%x\n",bit);


        //-----------------------------------------------------------------

        //BIT Wise OR: It is use to set a particular bit or bits

        


    return 0;
}

/*

11111111 11111111 11111111 11110000 
00000000 00000000 00000000 00001111 
11111111 11111111 11111111 11110000 
b=00000000 00000000 00000000 00001111 
c=11111111 11111111 11111111 11110000 
*/