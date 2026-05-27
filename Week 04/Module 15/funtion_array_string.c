#include <stdio.h>
#include <string.h>


/// function array with string 
 
void funtionArrayWithString(char s[])
{
    printf("%s\n", s);
    printf("%d", strlen(s));
}

int main(){
    char s[10];
    scanf("%s", s); // you may also take array string without &
    funtionArrayWithString(s);
    return 0;
}
