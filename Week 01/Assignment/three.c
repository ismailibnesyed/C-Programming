#include<stdio.h>
//----You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.---

int main()
{
    int i, lastNum, divBy3, divBy7;
    scanf("%d", &lastNum);
    for(i=1; i<=lastNum; i++){
        divBy3 = i%3 ;
        divBy7 = i%7 ;
        if(divBy3==0 && divBy7==0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}