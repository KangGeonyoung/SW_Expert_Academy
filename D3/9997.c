#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int testCase;
	int secondTestCase;
	int i, j, k;

	int number;
	int result[10000][2];

	int hour, minute;



	scanf("%d", &testCase);

	for (k = 0; k < testCase; k++)
	{
		scanf("%d", &number);
		hour = number / 30;
		number -= 30 * hour;
		minute = number * 2;

		result[k][0] = hour;
		result[k][1] = minute;
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d %d", i + 1, result[i][0], result[i][1]);

		printf("\n");
	}

	return 0;
}
