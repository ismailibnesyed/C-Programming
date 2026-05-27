#include<stdio.h>
int main(){
    int N,i;
    long long int sum=0;
    scanf("%d", &N);
    int A[N];
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    } 
    for(i=0; i<N; i++){
        sum = sum + A[i];
    }
    if(sum<0){
        printf("%lld", -sum);
    } else{
    printf("%lld", sum);
    }
    return 0;
}
