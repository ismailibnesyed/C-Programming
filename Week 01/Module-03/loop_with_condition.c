#include<stdio.h>

int main()
{
    int i,n;
    for(i=1; i<=100; i++){
        n = i%2 ;
        if(n==0){
        printf("%d - Even Number \n", i);
        }else{
        printf("%d - Odd Number \n", i);
        }
    }
    return 0;
}


