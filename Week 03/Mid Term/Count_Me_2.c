#include<stdio.h>
#include<string.h>
int main(){
    char arr[100000];
    scanf("%s", &arr);
    int count_consonent = 0;
    int len = strlen(arr);
    for(int i = 0; i < len; i++)
    {
        if(arr[i]!='a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' && arr[i]!='u')
        {
            count_consonent++;
        }
    }
    printf("%d", count_consonent);
    return 0;
}
