#include<stdio.h>
int main()
{
	int i;
	float Mooncake[3][1000];
	float temp1[3][1];
	int N, D, j;
	float count = 0;
	float profit_all = 0.00, profit = 0.00, temp = 0.00;
	scanf("%d %d", &N, &D);
	if (N > 0 && N <= 1000 && D > 0 && D <= 500)
	{
		for (i = 0; i < N; i++)
		{
			scanf("%f", &Mooncake[0][i]);//输入库存量(万吨)
			temp = temp + Mooncake[0][i];
		}
		for (i = 0; i < N; i++)
		{
			scanf("%f", &Mooncake[1][i]);//输入每种月饼的总售价(亿元)
			profit_all = profit_all + Mooncake[1][i];
		}
		for (i = 0; i < N; i++)
		{
			Mooncake[2][i] = Mooncake[1][i] / Mooncake[0][i];
		}
		if (temp >= (float)D)
		{
			if (temp == (float)D)
			{
				printf("%.2f", profit_all);
			}
			else
			{
				for (i = 0; i < N - 1; i++)
				{
					for (j = 0; j < N - 1 - i; j++)
					{
						if (Mooncake[2][j] <= Mooncake[2][j + 1])
						{
							temp1[2][0] = Mooncake[2][j + 1];
							temp1[0][0] = Mooncake[0][j + 1];
							temp1[1][0] = Mooncake[1][j + 1];
							Mooncake[2][j + 1] = Mooncake[2][j];
							Mooncake[0][j + 1] = Mooncake[0][j];
							Mooncake[1][j + 1] = Mooncake[1][j];
							Mooncake[2][j] = temp1[2][0];
							Mooncake[0][j] = temp1[0][0];
							Mooncake[1][j] = temp1[1][0];
						}
					}
				}
			}
			i = 0;
			while (count < (float)D)
			{
				profit = profit + Mooncake[1][i];
				count = count + Mooncake[0][i];
				i++;
			}
			if (count == (float)(D))
			{
				printf("%.2f", profit);
			}
			else
			{
				printf("%.2f", profit - Mooncake[1][i - 1] + ((float)D - (count - Mooncake[0][i - 1])) / Mooncake[0][i - 1] * Mooncake[1][i - 1]);
			}

		}
		else
		{
			printf("%.2f", profit_all);//库存小于需求 全部取出
		}
		return 0;
	}
	else
        return 0;
}
