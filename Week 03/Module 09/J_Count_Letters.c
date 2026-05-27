#include<stdio.h>
#include<string.h>
int main(){
    int ar[100000];
    char st[100000];
    scanf("%s", &st);
    int val[26]=0;
    
    for(int i=0; i<strlen(st); i++){
        int va= st[i]-'a';
        val[va]++;
    }

    return 0;
}
