#include <stdio.h>
#include <string.h>
int main(){
    ///-------pyramid pattern
    int n;
    scanf("%d", &n); //number of line
    int star = 1;
    int space = n-1;
    for(int k=1; k <= n; k++)
    {
        for(int l=1; l<=space; l++) // for printing space
        {
            printf(" ");
        }
        for(int m = 1; m <= star; m++ ) // for printing star
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space -= 1;
    }
    return 0;
}
