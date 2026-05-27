#include <stdio.h>
#include <string.h>

// Using Recursion
void hello(int i)
{
    if(i==6)
    {
        return;
    }
    hello(i+1);
    printf("%d %p\n", i, &i);
}

int main(){
    //hello(5);
    hello(1);
    return 0;
}
