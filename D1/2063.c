#include <stdio.h>
#include <math.h>

int main()
{
	int testCase;
	int i, j;
	int num[255];

	int median;
	int index;
	int temp;


	scanf("%d", &testCase);


	for (i = 0; i < testCase; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < testCase - 1; i++)
	{
		for (j = 0; j < testCase - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	index = testCase / 2;
	median = num[index];

	printf("%d", median);

	return 0;
}
