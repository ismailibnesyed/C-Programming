#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    fgets(string,40,stdin);

    // shortcut of count is stdrlen &&& must use of string.h header file

    int size= strlen(string);
    printf("%d", size);



    //scanf("%s", &string); //--if there is no space---
    //fgets(string,40,stdin);
    //gets(string);
    //int count = 0;
    // for(int i=0; string[i]!=0 ;i++){
    //     count++;
    // }
    //printf("%d", count);
    return 0;
}
