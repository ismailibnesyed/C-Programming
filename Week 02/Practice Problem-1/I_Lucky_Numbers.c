#include<stdio.h>
int main(){
    int N, rem, first, then, two;
    scanf("%d", &N);
    rem = N % 10; 
    first = N / 10;
    if(rem!=0 && first!=0){
        then = rem%first;
        two = first%rem;
        if(then==0 || two==0){
            printf("YES");
        } else if(rem==first==0){
            printf("NO");
        } 
    }else if(rem==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
