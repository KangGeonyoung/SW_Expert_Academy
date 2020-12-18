#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	int i, j;
	int sum = 0;
	int digit;


	scanf("%d", &num);

	while (num > 1)
	{
		digit = num % 10;
		sum += digit;
		num = num / 10;
	}

	printf("%d", sum);

	return 0;
}
