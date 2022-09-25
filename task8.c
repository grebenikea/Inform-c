#include <stdio.h>

int count_even(int a[], int n, int counter)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			++counter;
		}
	}
	return counter;
}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int counter = 0;
	printf("%i", count_even(a, 5, counter));
}