#include <stdio.h>

int last_digits(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		a[i] = a[i] % 10;
	}
}

int main()
{
	int a[5] = {12, 61, 426, 17, 115};
	last_digits(a, 5);

	for (int i = 0; i < 5; ++i)
		printf("%i ", a[i]);
}
