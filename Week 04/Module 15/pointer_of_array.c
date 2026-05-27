#include <stdio.h>
#include <string.h>
int main(){
    int ar[5]= {1,3,4,56, 7};
    *ar = 100;
    *(ar+1) = 200;
    printf("%p\n", &ar);
    printf("%p\n", &ar[0]);
    printf("%d\n", *ar);
    for(int i=0; i<5; i++){
        printf("%d ", ar[i]);
    }
    // printf("%p\n", &ar[1]);
    // printf("%p\n", &ar[2]);
    // printf("%p\n", &ar[3]);
    // printf("%p\n", &ar[4]);

    return 0;
}
