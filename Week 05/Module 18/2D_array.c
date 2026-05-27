#include <stdio.h>
#include <string.h>
int main(){
    // int ar[3][4];
    // ar[1][2] = 10;
    // printf("%d", ar[1][2]);
    int row, column;
    scanf("%d %d", &row, &column);
    int ar[row][column];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
