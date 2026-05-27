#include<stdio.h>
int main(){
    int a, b, i;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        b = i%2 ;
        if(b==0){
        printf("%d\n", i);
        }
    }
    if(a<=1){
        printf("-1");
    }
    return 0;
}
