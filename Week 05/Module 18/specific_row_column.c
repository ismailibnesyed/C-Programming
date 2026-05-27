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
    int row1;
    scanf("%d", &row1);
    for(int i=0; i<row; i++)
    {
        //printf("%d ", ar[row1][i]);
        printf("%d ", ar[i][row1]);
    }
    return 0;
}
