#include<stdio.h>
int main()
{
	int N, i,j=1,flag,temp1, NUM[1000], count[5] = { 0,0,0,0,0 }, temp[5] = { 0,0,0,0,0 };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &NUM[i]);
	}
	for (i = 0; i < N; i++)
	{
		if (NUM[i] % 5 == 0 && NUM[i] % 2 == 0)
		{
			count[0] = count[0] + 1;
			temp[0] = temp[0] + NUM[i];
		}
		else if (NUM[i] % 5 == 1)
		{
			count[1] = count[1] + 1;
			if (j%2==1)
			{
				temp[1] = temp[1] + NUM[i];
			}
			else
			{
				temp[1] = temp[1] - NUM[i];
			}
			j++;
		}
		else if (NUM[i] % 5 == 2)
		{
			count[2] = count[2] + 1;
			temp[2] = temp[2] + 1;
		}
		else if (NUM[i] % 5 == 3)
		{
			count[3] = count[3] + 1;
			temp[3] = temp[3] + NUM[i];
		}
		else if (NUM[i] % 5 == 4)
		{
			count[4] = count[4] + 1;
			if (count[4] == 1)
			{
				flag = NUM[i];
			}
			else if (count[4] > 1)
			{
				if (NUM[i] > flag)
				{
					temp1 = flag;
					flag = NUM[i];
					NUM[i] = temp1;
				}
			}
			
		}
	}
	for (i = 0; i < 5; i++)
	{
		if (count[i] == 0)
		{
			if (i < 4)
			{
				printf("N");
				printf(" ");
			}
			else
			{
				printf("N");
			}
		}
		else
		{
			if (i < 3)
			{
				printf("%d",temp[i]);
				printf(" ");
			}
			else if(i==3)
			{
				printf("%.1f", (float)temp[i] / (float)count[i]);
				printf(" ");
			}
			else
			{
				printf("%d", flag);
			}
		}
	}
	return 0;
}