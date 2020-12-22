#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int testCase;
	int i, j;

	char line[255][1000];
	int count[255];

	char mirror[255][1000];


	scanf("%d", &testCase);


	for (i = 0; i < testCase; i++)
	{
		scanf("%s", line[i]);
		count[i] = strlen(line[i]);
	}

	for (i = 0; i < testCase; i++)
	{
		for (j = count[i] - 1; j >= 0; j--)
		{
			if (line[i][j] == 'q')
			{
				mirror[i][count[i] - j - 1] = 'p';
			}
			else if (line[i][j] == 'p')
			{
				mirror[i][count[i] - j - 1] = 'q';
			}
			else if (line[i][j] == 'b')
			{
				mirror[i][count[i] - j - 1] = 'd';
			}
			else if (line[i][j] == 'd')
			{
				mirror[i][count[i] - j - 1] = 'b';
			}

		}
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d ", i + 1);
		for (j = 0; j < count[i]; j++)
		{
			printf("%c", mirror[i][j]);
		}
		printf("\n");
	}

	return 0;
}
