#include<stdio.h>
#include<math.h>

//------If Else Ladder--------
//------If Else Ladder--------


int main()
{
    int money;
    scanf("%d", &money);
    if( money >=1000){
        printf("I Eat Everythings.");
    }
    else if(money >= 100){
        printf("I Eat Burger.");
    }else if(money >= 50){
        printf("I Eat Fuchka.");
    }else{
        printf("Ami Fokir.");
    }
    return 0;
}