#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int left=0, right=n-1, res=1;
    while(left <= right){
        if(ar[left] != ar[right]){
            res=0;
            break;
        }
        left++, right--;
    }
    if (res==1){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}    

// #include<stdio.h>
// int main(){
//     int n, res;
//     scanf("%d", &n);
//     int ar1[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar1[i]);
//     }
//     for(int i=n-1, j=0; i>=0, j<n; i--, j++){
//         if(ar1[j] != ar1[i]){
//             res=0;
//             break;
//         }else{
//             res=1;
//         }
//     }
//     if (res==1){
//         printf("YES");
//     } else{
//         printf("NO");
//     }
//     return 0;
// }
