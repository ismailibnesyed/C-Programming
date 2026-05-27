#include <stdio.h>
#include <string.h>
#include <math.h>


int d;

// palindrome or not palindrome function
int is_palindrome(char arr[])
{
    int len = strlen(arr);
    if (len == 1)
    {
        d = 1;
        return d;
    }
    else if (len>1)
    {
        for(int i=0, j= len-1; i<len; i++, j--)
        {
            if(arr[i] != arr[j])
            {
                d = 0; //Not Palindrome
                return d;
            }
            else if(arr[i]  == arr[j])
            {
                d = 1 ; // Palindrome
            }
        }
        return d ;
    }
    return d;
}
// For Main Function
int main()
{
    char arr[1001] ;
    scanf("%s", arr);
    d = is_palindrome(arr);
    if(d==1)
    {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}
