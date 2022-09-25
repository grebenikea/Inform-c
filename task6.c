#include <stdio.h>

int print_binary(int number, int a[], int counter, int n)
{
	while (number != 0)
	{
		number = number / 2;
		++counter;
	}

	for (int i = 0; i < counter; ++i)
	{
		a[i] = n % 2;
		n = n / 2;
		printf("%i\n", a[i]); // с помощью этого вывода я смотрю, что записывается в массив
	}

	for (int i = counter - 1; i > 0; i -= 1)
	{
		printf("%i", a[i]); // этот вывод печает результат программы, но почему-то на 1 больше, чем нужно. и я не понимаю откуда это берется((((
	}
}

int main()
{
	int number, counter, n;
	scanf("%i", &number);
	int a[1000];
	n = number;
	counter = 0;

	printf("%i", print_binary(number, a, counter, n));
}