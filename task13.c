#include <stdio.h>

void alice(int);
void bob(int);

void alice(int number)
{
	number *= 3;
	number += 1;
	printf("Alice:  %i\n", number);
	bob(number);

}

void bob(int number)
{
	if (number != 0)
	{
		while ((number % 2) != 1)
		{
			number /= 2;
			printf("Bob:    %i\n", number);
		}
		if (number != 1)
			alice(number);
	}
}
int main()
{
	int n;
	scanf("%i", &n);
	alice(n);
}