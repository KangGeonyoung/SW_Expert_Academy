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


	scanf("%s", input);
	count = strlen(input);

	for (i = 0; i < count; i++)
	{
		if (97 <= input[i] && input[i] <= 122)
		{
			input[i] -= 32;
		}
	}

	printf("%s", input);


	return 0;
}
