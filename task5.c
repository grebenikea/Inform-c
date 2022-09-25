#include <stdio.h>

int sum_of_digits(int number, int sum)
{
	while (number != 0)
	{
		sum += (number % 10);
		number = number / 10;
	}
	return sum;
}

int main()
{
	int number, sum;
	scanf("%i", &number);
	sum = 0;

	printf("%i", sum_of_digits(number, sum));
}