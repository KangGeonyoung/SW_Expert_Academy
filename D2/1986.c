#include <stdio.h>
#include <string.h>
#include <math.h>



int main()
{
	int testCase;
	int secondTestCase;
	int i, j, k, m, n;

	int input;
	int sum;

	int result[100];


	scanf("%d", &testCase);

	for (k = 0; k < testCase; k++)
	{
		scanf("%d", &input);
		sum = 0;
		for (i = 1; i <= input; i++)
		{
			if (i % 2 == 0)
			{
				sum -= i;
			}
			else
			{
				sum += i;
			}
		}
		result[k] = sum;
	}




	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d", i + 1, result[i]);

		printf("\n");
	}

	return 0;
}
