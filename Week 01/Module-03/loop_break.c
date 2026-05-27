#include<stdio.h>

int main()
{
    int i,n;
    //--------Break ---------
    // for(i=1; i<=20; i++){
    //     printf("%d \n", i);
    //     if(i == 10){
    //         break;
    //     }
    //     // printf("%d \n", i);
    // }

    //-----------Continue----
    for(i=1; i<=20; i++){
        if(i == 10){
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}