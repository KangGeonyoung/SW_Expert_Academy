#include <stdio.h>
#include <string.h>
#include <math.h>



int main()
{
	int testCase;
	int secondTestCase;
	int i, j, k;

	char input[100000];
	char myInput[100000];
	int result[100];

	int correct;
	char c1, c2;


	scanf("%d", &testCase);

	for (k = 0; k < testCase; k++)
	{
		scanf("%d", &secondTestCase);

		memset(input, 0, sizeof(input));
		memset(myInput, -1, sizeof(myInput));

		scanf("%s", input);
		scanf("%s", myInput);


		correct = 0;
		for (i = 0; i < secondTestCase; i++)
		{
			if (65 <= input[i] && input[i] <= 90)  //대문자
			{
				if (65 <= myInput[i] && myInput[i] <= 90)  //대문자
				{
					if (input[i] == myInput[i])
					{

						correct++;
					}
				}
			}
			else  //소문자
			{
				if (97 <= myInput[i] && myInput[i] <= 122)  //소문자
				{
					if (input[i] == myInput[i])
					{
						correct++;
					}
				}
			}

		}

		result[k] = correct;
	}

	for (i = 0; i < testCase; i++)
	{
		printf("#%d %d", i + 1, result[i]);

		printf("\n");
	}

	return 0;
}
