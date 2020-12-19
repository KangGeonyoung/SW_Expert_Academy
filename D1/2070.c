#include <stdio.h>
#include <math.h>

int main()
{
	int testCase;
	int num1, num2;
	int i, j;
	char result[10];

	scanf("%d", &testCase);


	for (i = 0; i < testCase; i++)
	{
		scanf("%d %d", &num1, &num2);
		if (num1 > num2)
		{
			result[i] = '>';
		}
		else if (num1 < num2)
		{
			result[i] = '<';
		}
		else
		{
			result[i] = '=';
		}
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %c\n", i + 1, result[i]);
	}

	return 0;
}
