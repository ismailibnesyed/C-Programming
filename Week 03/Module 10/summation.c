#include<stdio.h>
int main(){
    int num, rem, dev, sum=0 ;
    scanf("%d", &num);
    for(int i=1;i<10;i++) {
        sum = sum + num%10;
        num = num/10;
    }
    printf("%d", sum);
    return 0;
}
