#include <stdio.h>
#include <math.h>

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
			sum += num[j];
		}
		result[i] = round((float)sum / 10);
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d\n", i + 1, result[i]);
	}

	return 0;
}
