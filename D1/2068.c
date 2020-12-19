#include <stdio.h>
#include <math.h>

int main()
{
	int testCase;
	int i, j;
	int num[10];
	int result[10];
	int max;


	scanf("%d", &testCase);


	for (i = 0; i < testCase; i++)
	{
		for (j = 0; j < 10; j++)
		{
			scanf("%d", &num[j]);
		}
		max = num[0];
		for (j = 0; j < 10; j++)
		{
			if (max < num[j])
			{
				max = num[j];
			}
		}
		result[i] = max;
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d\n", i + 1, result[i]);
	}

	return 0;
}
