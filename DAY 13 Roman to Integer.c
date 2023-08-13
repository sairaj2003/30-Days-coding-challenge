// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>    // use to convert uppercase

int romanToInteger(int n,char number[])
{
    int values[26];
    values['I' - 'A'] = 1;
    values['V' - 'A'] = 5;
    values['X' - 'A'] = 10;
    values['L' - 'A'] = 50;
    values['C' - 'A'] = 100;
    values['D' - 'A'] = 500;
    values['M' - 'A'] = 1000;
    
    int result=0;
    int prevValue=0;
    
    for(int i=n-1;i>=0;i--)
    {
        char c=toupper(number[i]);
        int currentvalue=values[c - 'A'];
        
        if(currentvalue < prevValue)
        {
            result=result - currentvalue;
        }
        else
        {
            result=result + currentvalue;
        }
        
        prevValue=currentvalue;
    }
    
    return result;
}

int main() {
    char number[100];
    printf("\nEnter roman number:");
    scanf("%s",number);
    
    int n=strlen(number);
    int ans=romanToInteger(n,number);
    
    printf("\nDecimal value corrosponding to %s is : %d",number,ans);
    return 0;
}
