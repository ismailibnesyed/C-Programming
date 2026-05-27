#include <stdio.h>
#include <string.h>

// return + parameter


/*return type function (parameter)
{
    return;
}*/
// always work from the main function

int sum(int num1,int num2)
{
    int ans = num1 + num2; // variable its may be same name or another name, but another number takes more space for the other variable
    return ans; // return answer will be work. then go to the line from where the function read in the main function.
}

int multi(int num1,int num2)
{
    int ans = num1 * num2;
    return ans;
}

int substruction(int num1,int num2)
{
    int ans = num1 - num2;
    return ans;
}

int division(float num1,float num2)
{
    float ans = num1 / num2;
    return ans;
}

int remainder(int num1,int num2)
{
    int ans = num1 % num2;
    return ans;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int val = sum(a, b); /* Go to sum function. then work in funtion. Variable its may be same name or another name, but another number takes more space for the other variable */
    int ans = multi(100, 200); // 'val2' variable may be another name like answer or same name. its take space for more variable
    int val3 = substruction(100, -900);
    float val4 = division(100, -900);
    int val5 = remainder(100, -900);
    printf("%d %d %d %ld %d", val, ans, val3, val4, val5);
    return 0;
}
