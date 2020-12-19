#include <stdio.h>

int main()
{
	int testCase;
	int i, j;
	int num[10];
	int result[10];
	int sum;

	scanf("%d", &testCase);


	for (i = 0; i < testCase; i++)
	{
		sum = 0;
		for (j = 0; j < 10; j++)
		{
			scanf("%d", &num[j]);
			if (num[j] % 2 == 1)
			{
				sum += num[j];
			}
		}
		result[i] = sum;
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d\n", i + 1, result[i]);
	}

	return 0;
}
