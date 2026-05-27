#include<stdio.h>
int main(){
    int num, b, i;
    scanf("%d", &num);
    for(i=1; i<=num; i+=1){
        b = num%i ;
        if(b==0){
            printf("%d\n", i);
        }
    }
    return 0;
}
