#include<stdio.h>
int main(){
    char alpha;
    scanf("%c", &alpha);
    if(alpha < 'z'){
        printf("%c", alpha+1);
    } else if(alpha=='z') {
        printf("a");
    }
    return 0;
}
