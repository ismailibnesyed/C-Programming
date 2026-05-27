#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    scanf("%s", &arr);
    int len = strlen(arr);
    int fre_arr[26] = {0};
    for(int k = 0; k < len; k++)
    {
        int val = arr[k] - 'a';
        fre_arr[val]++;
    }
    for(int k = 0; k < 26; k++)
    {
        if(fre_arr[k] != 0)
        {
            printf("%c : %d\n", k + 'a', fre_arr[k]);
        }
    }
    return 0;
}

