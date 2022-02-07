#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*그리디를 이용해 품 
  시간초과로 틀림
  dp가 그리디 보다 빠른 경우가 있음.
  */

int fib(int num)
{
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;

	return fib(num - 2) + fib(num - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));

}