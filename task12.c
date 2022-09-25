#include <stdio.h>

int sort(int a[], int size)
{	
	int x = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (a[j] < a[j + 1])
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
}

int main()
{
	int a[8] = {7, 2, 8, 3, 5, 4, 1, 6};
	sort(a, 8);

	for (int i = 0; i < 8; ++i)
		printf("%i ", a[i]);
}