#include<stdio.h>

//--In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a)-----------

int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = a%b;
    d = b%a;
    if(c==0 || d==0){
        printf("Yes");
    }else {
        printf("No");
    }
    return 0;
}


