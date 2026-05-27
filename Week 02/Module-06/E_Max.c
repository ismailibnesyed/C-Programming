#include<stdio.h>
#include<limits.h>
int main(){
    int n, max=INT_MIN;
    scanf("%d", &n);
    for(int i=1; i<=n; i+=1){
        int val;
        scanf("%d", &val);
        if(val>max){
            max = val ;
        }
    }
    printf("%d", max);
    return 0;
}



// int main(){
//     int n, mx=INT_MIN;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i+=1){
//         int val;
//         scanf("%d", &val);
//         if(val > mx){
//             mx = val ;
//         }
//     }
//     printf("%d\n", mx);
//     return 0;
// }
