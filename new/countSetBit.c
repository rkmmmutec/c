#include<stdio.h>


<<<<<<< HEAD

int countM1(unsigned int x)
{

//Method 1 : by mask
	
    printf("Value of x M1 : %d\n",x);

    int count =0 , mask,i;
    for(i=0; i<32; i++)
    {

        mask = 1<<i;

        if((x&mask) !=0 )
            count++;

    }



 return count;
}




int countM2(unsigned int x)
{



//Method 2 : By shifting , this method will not work with unsigned integers

    int count =0;

   printf("Value of x M2 :%d\n ",x);


    while (x!=0)
    {

        if((x&1)!=0)
            count++;

        x>>=1;

    }


return count;
=======
int displayBits(int x)
{
    int i, count=0;

    for(i= sizeof(int)*__CHAR_BIT__-1 ; i>=0 ; i--)
    {

        if(x & (1u<<i))
            {
                printf("1");
                count ++;

            }
        else
            printf("0");


        if(i%8==0)
            printf(" ");

    }

    printf("\n");

    return count;

}


int countUsingMask(int x)
{

int count =0;

for(int i= sizeof(x)*__CHAR_BIT__ -1 ; i>=0 ; i-- )
{

  int mask = 1<<i;

  if((x&mask) != 0)
    count++;
>>>>>>> 093403eb7857a3134a2701cdd2c8d0a450e63cdf


}

<<<<<<< HEAD




//Method 3 :
int countM3(unsigned int x)
{
   printf("Value of x M3 :%d\n ",x); 
    int count =0;

    while(x!=0)
    {
        
        x=x&(x-1);

        count++;

    }    
    return count ;

}


int main(int argc, char const *argv[])
{

    unsigned int x = 0;

    printf("Enter the number : ");
    scanf("%d",&x);


//    printf("Number of 1's in %d is : %d \n",countM1(x));
//    printf("Number of 1's in %d is : %d \n",countM2(x));
//    printf("Number of 1's in %d is : %d \n",countM3(x));

int a = countM1(x);
int b = countM1(x);
int c = countM1(x);
    
printf("countM1 : %d\n",a);
printf("countM2 : %d\n",b);
printf("countM3 : %d\n",c);



=======
return count ;


}

int main(int argc, char const *argv[])
{

    unsigned int x=0;

    printf("Enter the number to count the bit : ");
    scanf("%d",&x);

    int count = displayBits(x);    

    printf("Number of 1's in number %x is %d \n",x,count);
    printf("MAsk : Number of 1's in number %x is %d \n",x,countUsingMask(x));
 
>>>>>>> 093403eb7857a3134a2701cdd2c8d0a450e63cdf

    return 0;
}
