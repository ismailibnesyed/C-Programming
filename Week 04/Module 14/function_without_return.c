#include <stdio.h>
#include <string.h>

// no return + parameter

/* without return type function (parameter) // start from void function */

void sum(int a,int b)
{
    int ans = a + b; 
    return; // No parameter + return// it works like break beacuse it return, then return to from its come from main function.
    printf("%d", ans);
    //return ans; void dawar somoi return kono kaj kore nah mind it.
} // return to the back line from where the line come from main function

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    //int val = sum(a, b); // error because of function sum is void type. that cannot return the value 
    printf("Hello");
    return 0;
}
