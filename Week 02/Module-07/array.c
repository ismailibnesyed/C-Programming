#include<stdio.h>
int main(){
    int sum=0;
    int ara[5], i;
    for(i=0; i<=4; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<5; i++){
        sum = sum + ara[i];
    }
    // for(i=n; i>=0; i--){
    //     printf("%d +", ara[i]);
    //     sum = sum + ara[i];
    // }
    printf("%d", sum);
    return 0;
}
