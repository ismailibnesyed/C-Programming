#include <stdio.h>
#include <string.h>

int roll = 2408028; // Global variable for all funtion
int sum()
{
    printf("%d\n", roll);
}

int main(){
    printf("%d\n", roll);
    sum()   ;
    int i; // variable for main funtion
    for(i=0; i<10; i++)
    {
        i++;
    }
    printf("%d", i);
    return 0;
}
