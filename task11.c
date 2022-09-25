#include <stdio.h>

int reverse(int a[], int size, int b[])
{
	for (int i = size - 1; i >= 0; --i)
	{		
		for (int j = 0; j <= size + 1 ; ++j)
		{
			if ((i + j) == (size + 1))
			{
				b[j] = a[i];
				printf("%i ", b[j]);
			}
		}
	}	

}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int b[1000];
	reverse(a, 5, b);
}