#include<stdio.h>

//------Loop For Summation From 1 to Nth----

int main()
{
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    for(i=1; i<=n; i=i+3)
    {
        sum = sum + i ;
    }
    printf("%d", sum);
    return 0;
}


