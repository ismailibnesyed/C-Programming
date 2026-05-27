#include<stdio.h>
#include<string.h>

//---------concat function---------

int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int len = strlen(a);
    int i=0;

    //----build in concat-------

    strcat(b,a);
    //---while loop---
    // while(i<101){
    //     a[i+len]=b[i];
    //     i++;
    // };

    //--------do while loop------

    // do{
    //     a[i+len]=b[i];
    //     i++;
    // }while(i<101);

    //------while loop--------

    // for(int i=0; i<101; i++){
    //     a[i+len]=b[i];
    // }
    printf("%s %s", a,b);
    return 0;
}
