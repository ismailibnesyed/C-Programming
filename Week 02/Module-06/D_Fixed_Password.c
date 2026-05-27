#include<stdio.h>
int main(){
    int  password, check_password, n;
    password = 1999;
    // while(scanf("%d", &check_password) !=EOF){
    //     password = 1999;
    //     if(check_password==password){
    //         printf("Correct\n");
    //         break;
    //     }else{
    //         printf("Wrong\n");
    //     }
    // }
    for(;scanf("%d", &check_password);){
        if(password==check_password){
            printf("Correct\n");
            break;
        } else{
            printf("Wrong");
        }
    }
    return 0;
}
