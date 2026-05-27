#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    //--array----
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    //---Sum of Positive & Negative------
    int sum_pos=0;
    int sum_neg=0;
    for(int i=0; i<N; i++){
        if(A[i]>0){
            sum_pos = sum_pos +A[i];
        } else{
            sum_neg = sum_neg +A[i];
        }
    }
    printf("%d %d", sum_pos, sum_neg);
    return 0;
}
