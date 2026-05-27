#include <stdio.h>
#include <string.h>

// passed the array by function

void funtion_with_array(int ar[])
{
    ar[1] = 300;
}

int main(){
    int ar[3] = {10, 20, 30};
    funtion_with_array(ar);
    for(int i = 0; i<3; i++)
    {
        printf("%d " , ar[i]);
    }
    return 0;
}
