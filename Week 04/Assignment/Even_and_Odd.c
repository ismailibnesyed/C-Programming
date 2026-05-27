#include <stdio.h>
#include <string.h>

// Function 

void odd_even()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // function for count of even or odd number
    int even = 0, odd = 0;
    for(int i = 0; i<n; i++)
    {
        if( arr[i]%2 == 0)
        {
            // Even Number
            even ++;
        }
        else
        {
            // Odd Number
            odd++;
        }
    }
    printf("%d %d\n", even, odd);
}

// main function

int main()
{
    odd_even(); // function for count of even or odd number
    return 0;
}
