#include <stdio.h>
#include <string.h>
/*
-----------------------
|  Cheacking of       |
|  Primary Diagonal   |
|   Matrix            |
-----------------------
*/
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
    int count0 = 100;

    if(row == column) // cheaking square matrix
    {
        for(int i=0; i<row; i++)
        {
            //printf("%d ", ar[i][i]);
            for(int j=0; j<column; j++)
            {
                if(i == j)
                {

                }
                else
                {
                    if(ar[i][j] != 0)
                    {
                        count0 = 200 ;
                        printf("Not A Diagonal Matrix\n");
                        return;
                    }
                }
            }
        }
    }
    else
    {
        printf("Not A Primary Diagonal Matrix");
    }
    if(count0 == 100)
    {
        printf("Primary Diagonal Matrix");
    }
    return 0;
}
