#include <stdio.h>
#include <math.h>

int main()
{
	int testCase;
	int i, j;
	int num[255];
	int year[255], month[255], day[255];



	scanf("%d", &testCase);


	for (i = 0; i < testCase; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < testCase; i++)
	{
		day[i] = num[i] % 100;
		num[i] = num[i] / 100;

		month[i] = num[i] % 100;
		num[i] = num[i] / 100;

		year[i] = num[i] % 10000;
		num[i] = num[i] / 10000;
	}

	for (i = 0; i < testCase; i++)
	{
		if (month[i] == 1 || month[i] == 3 || month[i] == 5 || month[i] == 7 || month[i] == 8 || month[i] == 10 || month[i] == 12)
		{
			if (day[i] > 31 || day[i] < 1)
			{
				month[i] = -1;
				day[i] = -1;
			}
		}
		else if (month[i] == 2)
		{
			if (day[i] > 28 || day[i] < 1)
			{
				month[i] = -1;
				day[i] = -1;
			}
		}
		else if (month[i] <= 0)
		{
			month[i] = -1;
			day[i] = -1;
		}
		else if (month[i] > 12)
		{
			month[i] = -1;
			day[i] = -1;
		}
		else
		{
			if (day[i] > 30 || day[i] < 1)
			{
				month[i] = -1;
				day[i] = -1;
			}
		}
	}

	for (i = 0; i < testCase; i++)
	{
		if (month[i] == -1)
		{
			printf("#%d %d\n", i + 1, -1);
		}
		else
		{
			if (year[i] < 10)
			{
				if (month[i] > 10)
				{
					if (day[i] > 10)
					{
						printf("#%d %d%d%d%d/%d/%d\n", i + 1, 0, 0, 0, year[i], month[i], day[i]);
					}
					else
					{
						printf("#%d %d%d%d%d/%d/%d%d\n", i + 1, 0, 0, 0, year[i], month[i], 0, day[i]);
					}

				}
				else
				{
					if (day[i] > 10)
					{
						printf("#%d %d%d%d%d/%d%d/%d\n", i + 1, 0, 0, 0, year[i], 0, month[i], day[i]);
					}
					else
					{
						printf("#%d %d%d%d%d/%d%d/%d%d\n", i + 1, 0, 0, 0, year[i], 0, month[i], 0, day[i]);
					}
				}
			}
			else if (10 <= year[i] && year[i] < 100)
			{
				if (month[i] > 10)
				{
					if (day[i] > 10)
					{
						printf("#%d %d%d%d/%d/%d\n", i + 1, 0, 0, year[i], month[i], day[i]);
					}
					else
					{
						printf("#%d %d%d%d/%d/%d%d\n", i + 1, 0, 0, year[i], month[i], 0, day[i]);
					}

				}
				else
				{
					if (day[i] > 10)
					{
						printf("#%d %d%d%d/%d%d/%d\n", i + 1, 0, 0, year[i], 0, month[i], day[i]);
					}
					else
					{
						printf("#%d %d%d%d/%d%d/%d%d\n", i + 1, 0, 0, year[i], 0, month[i], 0, day[i]);
					}
				}
			}
			else if (100 <= year[i] && year[i] < 1000)
			{
				if (month[i] > 10)
				{
					if (day[i] > 10)
					{
						printf("#%d %d%d/%d/%d\n", i + 1, 0, year[i], month[i], day[i]);
					}
					else
					{
						printf("#%d %d%d/%d/%d%d\n", i + 1, 0, year[i], month[i], 0, day[i]);
					}

				}
				else
				{
					if (day[i] > 10)
					{
						printf("#%d %d%d/%d%d/%d\n", i + 1, 0, year[i], 0, month[i], day[i]);
					}
					else
					{
						printf("#%d %d%d/%d%d/%d%d\n", i + 1, 0, year[i], 0, month[i], 0, day[i]);
					}
				}

			}
			else
			{
				if (month[i] > 10)
				{
					if (day[i] > 10)
					{
						printf("#%d %d/%d/%d\n", i + 1, year[i], month[i], day[i]);
					}
					else
					{
						printf("#%d %d/%d/%d%d\n", i + 1, year[i], month[i], 0, day[i]);
					}

				}
				else
				{
					if (day[i] > 10)
					{
						printf("#%d %d/%d%d/%d\n", i + 1, year[i], 0, month[i], day[i]);
					}
					else
					{
						printf("#%d %d/%d%d/%d%d\n", i + 1, year[i], 0, month[i], 0, day[i]);
					}
				}
			}
		}
	}

	return 0;
}
