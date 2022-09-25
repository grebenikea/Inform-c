#include <stdio.h>

int trib(int n, int a[])
{
	if (n == 1 || n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		{
			for (int i = 3; i < n + 1; ++i)
			{
				a[i] = a[i - 3] + a[i - 2] + a[i - 1];
			}
			return a[n];
		}
}


int main()
{
	int n;
	scanf("%i", &n);
	int a[1000];
	a[0] = 0;
	a[1] = 0;
	a[2] = 1;

	printf("%i", trib(n, a));
}