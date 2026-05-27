#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i=n-1; i>=1; i--)
    {
        for (k=0; k<n-i; k++)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}