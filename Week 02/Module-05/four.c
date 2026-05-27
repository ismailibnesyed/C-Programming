#include<stdio.h>
#include<math.h>
int main(){
    char letter;
    scanf("%c", &letter);
    int b;
    b = letter;
    if(b>64 && b<91){
        printf("%c", b+32);
    }else if(b>96 && b<123){
        printf("%c", b-32);
    }
    return 0;
}

