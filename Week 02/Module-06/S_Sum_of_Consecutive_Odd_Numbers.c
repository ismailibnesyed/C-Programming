#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i+=1){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a>b){
            if(a%2==0){
                for(int x=a; x<b; x+=2){
                    int sum=0;
                    sum + x ;
                    printf("%d", sum);
                }
            }
        }
    }
    return 0;
}
