#include<stdio.h>
#include<string.h>
int main(){
    char arr[10000];
    scanf("%s", arr);
    int len = strlen(arr);
    int free[26] = {0};
    for(int m = 0; m < len; m++)
    {
        int val = arr[m] - 'a';
        free[val]++;
    }
    for(int m = 0; m < 26; m++)
    {
        if ( free[m] != 0)
        {
            printf("%c - %d\n", m + 'a', free[m]);
        }
    }
    return 0;
}
