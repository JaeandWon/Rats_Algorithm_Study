#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_FIBO 50

int DP[50] = { 0, };    

int Fibonacci(int n) {  //TOP_DOWN
    if (n <= 1) {
        return n;
    }
    else {
        if (DP[n] > 0) {        
            return DP[n];
        }
        DP[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
        return DP[n];
    }
}

/*
int Fibonacci(int n) {   //BOTTOM-UP
    DP[0] = 0;
    DP[1] = 1;
    int i;
    for (i = 2; i <= n; i++) {    
        DP[i] = DP[i - 1] + DP[i - 2];
    }
    return DP[n];
}
*/


int main()
{
    int i = 0;

    int n;
    scanf("%d", &n);
    printf("%d", Fibonacci(n));

    return 0;
}