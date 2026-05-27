#include<stdio.h>
int main(){
    int N,X, position=-1;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    scanf("%d", &X);
    for(int i=0; i<N; i++){
        if(X==A[i]){
            position = i;
            break;
        }
    }
    printf("%d", position);
    return 0;
}
