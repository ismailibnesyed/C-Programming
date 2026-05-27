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
    int count0 = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(ar[i][j] == 0)
            {
                count0++;
            }
        }
    }
    if(count0 == row*column)
    {
        printf("This is zero matrix");
    }
    else
    {
        printf("This is not zero matrix");
    }
    return 0;
}
