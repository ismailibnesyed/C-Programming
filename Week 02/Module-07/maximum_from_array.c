#include<stdio.h>
int main(){
    int ar[5];
    int i, num;
    for(i=0; i<5; i++){
        scanf("%d ", &ar[i]);
    }
    num= ar[0];
    for(i=0; i<5; i++){
        if(ar[i]<num){
            num=ar[i];
        }
    }
    printf("%d", num);
    return 0;
}
