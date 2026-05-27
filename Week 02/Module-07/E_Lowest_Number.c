#include<stdio.h>
#include<limits.h>
int main(){
    int N, position=1;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    int lower=A[0] ;
    for(int i=0; i<N; i++){
        if(A[i]<lower){
            lower=A[i] ;
            position = i+1 ;
        }
    }
    printf("%d %d", lower, position);
    return 0;
}
