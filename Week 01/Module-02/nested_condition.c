#include<stdio.h>

//---------Nested Condintion--------

int main()
{
    int money;
    scanf("%d", &money);
    if(money>=5000){
        printf("Cox's Bazar Jabo\n");
        if(money>=10000){
            printf("Then, Go to Saint Martin");
        }else{
            printf("Go only Cox's Bazar");
        }

    }else{
        printf("No tour, Only reading \n");
    }
    return 0;
}