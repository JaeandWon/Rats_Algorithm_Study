#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, five = 0, fivesquared = 0, fivecubed = 0;
    scanf("%d", &n);
    
    five = n / 5;
    fivesquared = n / 25;
    fivecubed = n / 125;

    printf("%d", five + fivesquared + fivecubed);
}