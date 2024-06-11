#include<stdio.h>



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


}





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




    return 0;
}
