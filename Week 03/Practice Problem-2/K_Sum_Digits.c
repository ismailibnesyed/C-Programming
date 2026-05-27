#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char ar[n];
    scanf("%s", &ar);
    int sum=0;
    //--- we substract 0 because of char and int addition--
    for(int i=0; i<n;i++){
        sum= sum + ar[i]- '0';
    }
    printf("%d ", sum);
    return 0;
}
