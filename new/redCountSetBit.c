#include<stdio.h>

 //Method 1
int displayBits(int x)
{
    int i, count=0;

   while (x!=0)
   {

    if((x&1)!=0)
        count++;

    x>>=1;

   }
   
    return count;
//Not work for Signed integer
}

//Methid 2 

int displayBits1(int x)
{

    int count1 =0 , i, mask;

    for(i=0;i<32;i++)
    {
        mask=1<<i;
        if((x&mask) !=0)
            count1++;

    }

    
return count1;



}

int displayBits2(int x)
{
    int count2=0;

    while(x!=0)
    {
        count2++;
        x=x&(x-1);

    }

return count2;
}


int main(int argc, char const *argv[])
{

    unsigned int x=0;

    printf("Enter the number to count the bit : ");
    scanf("%d",&x);
    int count = displayBits(x);    
    int count1 = displayBits1(x);    
    int count2 = displayBits2(x);    


    printf("Number of 1's in number %d is %d \n",x,count);
    printf("Number of 1's in number %d is %d \n",x,count1);
    printf("Number of 1's in number %d is %d \n",x,count2);
    
 

    return 0;
}


// while(x!=0)
// {

// if(x&1 !=0)
//     count++;

//    x>>=1; 

// }


//COUNT SET BIT IN GROUPS OF 4