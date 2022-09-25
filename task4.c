#include <stdio.h>

int triangle(int n)
{
	for (int i = 0; i < n + 1; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%i", &n);

	printf("", triangle(n));
}