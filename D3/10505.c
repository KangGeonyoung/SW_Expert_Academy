#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int testCase;
	int secondTestCase;
	int i, j, k;

	int number[10000];
	int result[10000];

	int sum;
	int avg;
	int count;

	scanf("%d", &testCase);


	for (k = 0; k < testCase; k++)
	{
		sum = 0;
		count = 0;

		scanf("%d", &secondTestCase);
		for (i = 0; i < secondTestCase; i++)
		{
			scanf("%d", &number[i]);
			sum += number[i];
		}
		avg = (float)sum / secondTestCase;

		for (i = 0; i < secondTestCase; i++)
		{
			if (number[i] <= avg)
			{
				count++;
			}
		}

		result[k] = count;
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d", i + 1, result[i]);

		printf("\n");
	}

	return 0;
}
