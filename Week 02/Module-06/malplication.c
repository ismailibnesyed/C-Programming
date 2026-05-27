#include<stdio.h>
int main(){
    int a, b, i, c;
    scanf("%d", &a);
    for(i=1; i<=12; i++){
        c = i * a;
        printf("%d * %d = %d\n", a, i, c);
    }
    return 0;
}
