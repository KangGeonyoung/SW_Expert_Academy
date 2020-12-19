#include <stdio.h>
#include <string.h>
#include <math.h>



int main()
{
	int testCase;
	int secondTestCase;
	int i, j, k, m, n;

	char input[100];
	int count;

	int sign = 0;
	int result[100];


	scanf("%d", &testCase);

	for (k = 0; k < testCase; k++)
	{
		scanf("%s", input);
		count = strlen(input);

		for (i = 0; i < count / 2; i++)
		{
			if (input[i] == input[count - i - 1])
			{
				sign = 1;
			}
			else
			{
				sign = 0;
				break;
			}
		}

		if (sign == 1)
		{
			result[k] = 1;
		}
		else
		{
			result[k] = 0;
		}
	}




	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d", i + 1, result[i]);

		printf("\n");
	}

	return 0;
}
