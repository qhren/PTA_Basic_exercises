#include<stdio.h>
int main()
{
	int sort_up(int*,int);
	int sort_down(int*,int);
	int N,i = 0, temp[4], result,n=3,a,b,temp1;
	scanf("%d", &N);
	temp1 = N;
	if (N > 0 && N < 10000)
	{
		while (N != 0)
		{
			temp[3 - i] = N % 10;
			N = N / 10;
			i++;
		}
		if (i == 1)
		{
			temp[0] = temp[1] = temp[2] = 0;
		}
		else if (i == 2)
		{
			temp[0] = temp[1] = 0;
		}
		else if (i == 3)
		{
			temp[0] = 0;
		}
		if (temp[0] == temp[1] && temp[2] == temp[3] && temp[0] == temp[2])
		{
			printf("%d - %d = 0000", temp1, temp1);
			return 0;
		}
		do
		{
			a = sort_down(temp, n);
			b = sort_up(temp, n);
			result = a - b;
			printf("%d - %d%d%d%d = %d%d%d%d", a, (b / 1000) % 10, (b / 100) % 10, (b / 10) % 10, b % 10, (result / 1000) % 10, (result / 100) % 10, (result / 10) % 10, result % 10);
			if (result != 6174)
			{
				printf("\n");
			}
			i = 0;
			if (result < 1000)
			{
				temp[0] = 0;
			}
			while (result != 0)
			{
				temp[3 - i] = result % 10;
				result = result / 10;
				i++;
			}
		} while (!(temp[0] == 6 && temp[1] == 1 && temp[2] == 7 && temp[3] == 4));//需要考虑一开始输入6174的情况
		return 0;
	}
	else
	{
		return 0;
	}
}
int sort_up(int *pointer, int n)
{
	int i,j,temp2;
	for (i = 0; i < n; i++)
	{
		for (j= 0; j < n - i; j++)
		{
			if (*(pointer + j) >= *(pointer + j + 1))
			{
				temp2 = *(pointer + j + 1);
				*(pointer + j + 1) = *(pointer + j);
				*(pointer + j) = temp2;
			}
		}
	}
	return pointer[0] * 1000 + pointer[1] * 100 + pointer[2] * 10 + pointer[3];
}
int sort_down(int *pointer, int n)
{
	int i, j, temp2;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (*(pointer + j) <= *(pointer + j + 1))
			{
				temp2 = *(pointer + j + 1);
				*(pointer + j + 1) = *(pointer + j);
				*(pointer + j) = temp2;
			}
		}
	}
	return pointer[0] * 1000 + pointer[1] * 100 + pointer[2] * 10 + pointer[3];
}