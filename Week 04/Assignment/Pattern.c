#include <stdio.h>
#include <string.h>

int n;
int hash, minus, gaps; // for upper case
int gaps2, minus2, hash2; // for lower case

// Void Function of THe pattern No Return + No Parameter
void pattern()
{
    scanf("%d", &n);
    hash = 1;
    gaps = n-1;
    minus = 3;
    gaps2 = 1 ;
    minus2 = 2*n -5 ;
    hash2 = 2*n - 3 ;
    // from upper to lower
    if(n==1)
    {
        printf("#\n");
        return;
    }
    /*
    -----------------------------
    |    for Even number         |
    |    Upper case              |
    -----------------------------
    */
    if (n>1 && n%2 == 0)
    {
        for(int i=1; i<=n/2; i++)
        {
            for(int j=1; j<=gaps; j++)
            {
                printf(" ");
            }
            gaps--;
            for(int l = 1; l<=hash; l++)
            {
                printf("#");
            }
            printf("\n");
            for(int j=1; j<=gaps; j++)
            {
            printf(" ");
            }
            gaps--;
            for(int k = 1; k<=minus; k++)
            {
                printf("-");
            }
            printf("\n");
            hash = hash + 4 ;
            minus = minus + 4 ;
        }
    }
    /*
    -----------------------------
    |    for Even number         |
    |    Lower case              |
    -----------------------------
    */
    if (n>1 && n%2 == 0)
    {
        for(int i=1; i<=n/2; i++)
        {
            for(int j=1; j<=gaps2; j++)
            {
                printf(" ");
            }
            gaps2++;
            for(int l = 1; l<=hash2; l++)
            {
                printf("#");
            }
            printf("\n");
            for(int j=1; j<=gaps2; j++)
            {
            printf(" ");
            }
            gaps2++;
            for(int k = 1; k<=minus2; k++)
            {
                printf("-");
            }
            printf("\n");
            hash2 = hash2 - 4 ;
            minus2 = minus2 - 4 ;
        }
    }
    /*
    -----------------------------
    |    for odd number          |
    |    Upper case              |
    -----------------------------
    */
    if (n>1 && n%2 == 1)
    {
        for(int i=1; i<=n/2; i++)
        {
            for(int j=1; j<=gaps; j++)
            {
                printf(" ");
            }
            gaps--;
            for(int l = 1; l<=hash; l++)
            {
                printf("#");
            }
            printf("\n");
            for(int j=1; j<=gaps; j++)
            {
            printf(" ");
            }
            gaps--;
            for(int k = 1; k<=minus; k++)
            {
                printf("-");
            }
            printf("\n");
            hash = hash + 4 ;
            minus = minus + 4 ;
        }
        for(int m=1; m<=2*n-1; m++)
        {
            printf("#");
        }
        printf("\n");
    }

    /*
    -----------------------------
    |    for odd number          |
    |    lower case              |
    -----------------------------
    */
    if (n>1 && n%2 == 1)
    {
        minus2 = 2*n - 3 ;
        hash2 = 2*n - 5 ;
        for(int i=1; i<=n/2; i++)
        {
            for(int j=1; j<=gaps2; j++)
            {
                printf(" ");
            }
            gaps2++;
            for(int k = 1; k<=minus2; k++)
            {
                printf("-");
            }
            printf("\n");
            for(int j=1; j<=gaps2; j++)
            {
            printf(" ");
            }
            gaps2++;
            for(int l = 1; l<=hash2; l++)
            {
                printf("#");
            }
            printf("\n");
            hash2 = hash2 - 4 ;
            minus2 = minus2 - 4 ;
        }
    }
}


int main(){
    pattern();
    return 0;
}
