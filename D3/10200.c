#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int testCase;
	int secondTestCase;
	int i, j, k;

	int number[10000];
	int result[10000][2];

	int personNum;
	int P, T;
	int max;
	int min;


	scanf("%d", &testCase);

	for (k = 0; k < testCase; k++)
	{
		scanf("%d %d %d", &personNum, &P, &T);
		max = 0;
		min = 0;

		if (P > T)
		{
			max = T;
			min = (P + T) - personNum;
			if (min < 0)
			{
				min = 0;
			}
		}
		else if (P < T)
		{
			max = P;
			min = (P + T) - personNum;
			if (min < 0)
			{
				min = 0;
			}
		}
		else
		{
			max = P;
			min = (P + T) - personNum;
			if (min < 0)
			{
				min = 0;
			}
		}

		result[k][0] = max;
		result[k][1] = min;
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d %d", i + 1, result[i][0], result[i][1]);

		printf("\n");
	}

	return 0;
}
