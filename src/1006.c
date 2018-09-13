#include<stdio.h>
int main()
{
	int n, temp, i = 0, count[3] = { 0,0,0 }, temp1;
	scanf("%d", &n);
	temp1 = n;
	while (temp1 != 0)
	{ 
		temp = temp1 % 10;
		temp1 = temp1 / 10;
		count[3 - i - 1] = temp;
		i++;
	}
	for (i = 0; i <= 2; i++)
	{
		if (i == 0)
		{
			while (count[i] != 0)
			{
				printf("B");
				count[i]--;
			}
		}
		if (i == 1)
		{
			while (count[i] != 0)
			{
				printf("S");
				count[i]--;
			}
		}
	}
	i = 1;
	if (count[2] != 0)
	{
		while (count[2] != 0)
		{
			printf("%d", i);
			i++;
			count[2]--;
		}
	}
	else
	return 0;
}s