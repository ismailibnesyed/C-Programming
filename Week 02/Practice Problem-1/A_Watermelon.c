#include<stdio.h>
int main(){
    int w, even;
    scanf("%d", &w);
    even = w%2 ;
    if(even%2==0 && w!=2){
        printf("YES");
    } else if(w==2){
        printf("NO");
    } else{
        printf("NO");
    }
    return 0;
}
