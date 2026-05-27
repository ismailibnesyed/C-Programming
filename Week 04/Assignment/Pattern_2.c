#include <stdio.h>
#include <string.h>

// pattern2(int n)
// {
//     int gaps = n-1;
//     for(int i=1; i<=n; i++)
//     {
//         int in=1;
//         for(int g=gaps; g>0; g-- )
//         {
//             printf(" ");
//         }
//         for (int k = i; k>0; k--)
//         {
//             printf("%d", k);
//         }
//         printf("\n");
//         gaps--;
//         in++;
//     }
// }
int main(){
    int n;
    scanf("%d", &n);
    //pattern2(n);    int gaps = n-1;
    int gaps = n-1;
    for(int i=1; i<=n; i++)
    {
        int in=1;
        for(int g=gaps; g>0; g-- )
        {
            printf(" ");
        }
        for (int k = i; k>0; k--)
        {
            printf("%d", k);
        }
        printf("\n");
        gaps--;
        in++;
    }
    return 0;
}
