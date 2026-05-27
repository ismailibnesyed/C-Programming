#include<stdio.h>
#include<string.h>

//---------If Else Condition--------

int main()
{
    int money;
    char a[6];
    scanf("%s", &a);
    printf("%s\n", a);
    scanf("%d", &money);
    if(money>=5000){
        printf("Cox's Bazar Jabo\n");
    }if(money>=7000){
        printf("Go only Cox's Bazar\n");
    }if(money>=10000){
        printf("Then, Go to Saint Martin\n");
    }
    return 0;
}