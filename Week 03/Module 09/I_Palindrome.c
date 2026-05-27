#include<stdio.h>
#include<string.h>
int main(){
    char st[1000];
    scanf("%s", &st);
    int n=strlen(st);
    int left=0, right=n-1, val=1;
    while(left<=right){
        if(st[left] != st[right]){
            val = 0;
            break;
        }
        left++, right--;
    }
    if(val==1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
