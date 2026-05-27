#include<stdio.h>
#include<string.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]); 
    }
    int fre[100001]={0};
    for(int i=0; i<n; i++){
        int val=ar[i];
        fre[val]++;
    }
    for(int i=1; i<=m; i++){
        printf("%d\n", fre[i]);
    }
    return 0;
}
