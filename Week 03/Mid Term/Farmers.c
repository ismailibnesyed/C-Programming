#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int sum=0, multi, divi;
        sum = m1 + m2;
        multi = m1 * d;
        divi = multi / sum ;
        printf("%d\n", d - divi);
    }
    return 0;
}
