#include<stdio.h>
#include<string.h>
int main(){
    char st1[1000];
    char st2[1000];
    scanf("%s %s",&st1, &st2);
    printf("%d %d\n",strlen(st1), strlen(st2));
    printf("%s %s",st1, st2);
    return 0;
}
