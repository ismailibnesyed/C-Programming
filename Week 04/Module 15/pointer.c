#include <stdio.h>

// Pointer = location of the variable in the memory
    //Dereferencing a pointer

int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
    printf("%p\n", &x); // & sign for location of the value x

    int* poit = &x; // star sign denoted pointer variable
    //printf("%p\n", poit);

    *poit = 200; // change the vale of x

    //Dereferencing a pointer
    *poit = 200; // change the vale of x

    printf("%d", *poit);
    printf("\n%d", x);


    // location og poit variable

    //printf("%p", &poit);
    return 0;
}
