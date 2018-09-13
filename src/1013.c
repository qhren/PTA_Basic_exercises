# include<stdio.h>
#include<math.h>
int main()
{
	int M, N, i, j, count = 2,temp=0, Prime[10000];
	scanf("%d %d", &M, &N);//输入两个Index
	//创建Prime_Table
	Prime[0] = 2;
	Prime[1] = 3;
	for (i=4;count<N;i++)
	{
		for (j = 2; j <= (int)sqrt(i); j++)
		{
			if (i%j == 0)
			{
				temp++;
			}
		}
		if (temp ==0 )
		{
			Prime[count] = i;
			count = count + 1;
		}
		temp = 0;
	}
	for (i = M-1, j = 1; i <= N-1; i++, j++)
	{
		printf("%d", Prime[i]);
		if (j % 10 != 0 && i != N - 1)
			printf(" ");
		else if(j%10==0)
		{
			printf("\n");
		}
	}
	return 0;
}