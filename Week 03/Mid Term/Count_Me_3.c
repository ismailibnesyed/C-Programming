#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int countC=0, counts=0, countN=0;
        char st[10000];
        scanf("%s", &st);
        int len = strlen(st);
        for(int i=0; i<len ;i++){
            if(st[i]>='A' && st[i]<='Z'){
                countC++;
            }
            else if(st[i]>='a' && st[i]<='z'){
                counts++;
            }
            else{
                countN++;
            }
        }
        printf("%d %d %d\n", countC, counts, countN);
        continue;
    }
    return 0;
}
