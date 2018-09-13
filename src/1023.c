#include<stdio.h>
int main()
{
	int temp[10], i,sum=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &temp[i]);
		sum += temp[i];
	}
	if (sum <= 50 && sum > 0 && (temp[1] > 0 || temp[2] > 0 || temp[3] > 0 || temp[4] > 0 || temp[5] > 0 || temp[6] > 0 || temp[7] > 0 || temp[8] > 0 || temp[9] > 0))
	{
		if (temp[0] == 0)
		{
			for (i = 1; i < 10; i++)
			{
			    while (temp[i] > 0)
				{
					printf("%d", i);
					temp[i]--;
				}
			}
		}
		else if (temp[0] > 0)
		{
			for (i = 1; i < 10; i++)
			{
				if (temp[i] > 0)
				{
					printf("%d", i);
					temp[i]--;
					while (temp[0] != 0)
					{
						printf("0");
						temp[0]--;
					}
					while (temp[i] != 0)
					{
						printf("%d",i);
						temp[i]--;
					}
				}
				else
					continue;
			}
		}
	return 0;
	}
	else
	{
		return 0;
	}
}