#include <stdio.h>

int factorials(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = a[i] - 1; j > 1; --j)
		{
			a[i] *= j;
		}
	}	

}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	factorials(a, 5);

	for (int i = 0; i < 5; ++i)
		printf("%i ", a[i]);
}