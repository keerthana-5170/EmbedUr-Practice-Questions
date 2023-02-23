#include <stdio.h>
#include <math.h>

int main()
{
    long int count=0,num,rem,m,arr[10];
    printf("Enter a number:");
    scanf("%ld",&num);
    if(num==0)
    {
        return 0;
    }
    m=num;    
    m=m/2;
    while(m!=0)
    {
        m=m/2;
        count++;
        
    }
    printf("msb =%d",1<<count);
   
}
