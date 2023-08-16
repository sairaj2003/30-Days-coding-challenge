/*
GCD OF TWO NUMBERS
*/
#include <stdio.h>

int gcd(int num1,int num2)
{
    int gcd=1;
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1 % i==0 && num2 % i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}

int main() {
    int num1,num2;
    printf("\nEnter first number:");
    scanf("%d",&num1);
    
    printf("\nEnter Second number:");
    scanf("%d",&num2);
    
    int result=gcd(num1,num2);
    printf("\nGCD of %d and %d is %d",num1,num2,result);
    return 0;
}
