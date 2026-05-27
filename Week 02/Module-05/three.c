#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d", &a);
    b = a/1000;
    c = b%2;
    if(c==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}



