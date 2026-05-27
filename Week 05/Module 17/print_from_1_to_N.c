#include <stdio.h>
// By recursion
void hello(int i)
{
    if(i==101)
    {
        return;
    }
    printf("%d", i);
    hello(i+1); //its an infinite loop
}
int main(){
    int i=1;
    hello(i);
    return 0;
}
