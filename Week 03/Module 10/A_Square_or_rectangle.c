#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int w[2*t];
    for(int i=1; i<t; i++){
        scanf("%d", &w[i]);
    }
    for(int i=0; i<t; i++){
        if(w[i]==w[i+1]){
        printf("Square\n");
        }
        if(w[i]!=w[i+1]){
            printf("Rectangle\n");
        }
    }
    
    return 0;
}
