#include<stdio.h>
#include<math.h>
int main()
{
	int Polynomial[4002], temp[4002],count=0;
	int i = 0, j;
	do
	{
		scanf("%d", &Polynomial[i]);
		i++;
	} while (getchar()!='\n');
	for (j = 0; j <= i-1; j++)
	{
		if (j % 2 == 0)
		{
			temp[j] = Polynomial[j] * Polynomial[j + 1];
		}
		else if (j % 2 == 1&&Polynomial[j]!=0)
		{
			temp[j] = Polynomial[j] - 1;
		}
		else if (j % 2 == 1 && Polynomial[j] == 0)
		{
			temp[j] = Polynomial[j];
		}
	}
	for (j = 0; j <= i - 1; j++)
	{
		if (temp[j] == 0)
		{
			count = count + 1;
		}
	}
	for (j = 0; j <= i - 1; j++)
	{
		if (count == 0 || count == 1 || (count == 2 && i == 2))
		{
			if (j != i - 1)
			{
				printf("%d", temp[j]);
				printf(" ");
			}
			else
			{
				printf("%d", temp[j]);
			}
		}
		else if ((count == 2 && i != 2) || count == 3)
		{
			if (j < i - 3)
			{
				printf("%d", temp[j]);
				printf(" ");
			}
			else if (j == i - 3)
			{
				printf("%d",temp[j]);
			}
		}
	}
	return 0;
}