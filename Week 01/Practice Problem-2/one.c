#include<stdio.h>

//----You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No Print Yes if the value is divisible by 5 and print No otherwise.----

int main()
{
    int i, number, divide;
    scanf("%d", &number);
    for(i=1; i<=number; i++)
    {
        divide = i%5;
        if(divide==0)
        {
            printf("%d Yes\n",i);
        }else{
            printf("%d No\n", i);
        }
    }
    return 0;
}
