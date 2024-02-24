#include<stdio.h>
int main()
{
	int a = 2;
	int b = 1;
	int n = 0;
	scanf_s("%d", &n);
	int he = 0;
	
	int i = 0;
	for (i = 1; i <= n; i++)
	{   
		printf("%d", a / b);
		he = he + a / b;
		int t = 0;
		t = a;
		a = a + b;
		b = t;

	}
	 printf("%d", he);
	return 0;
}