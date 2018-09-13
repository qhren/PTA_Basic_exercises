#include<stdio.h>
#include<math.h>
int main()
{
	int N,i=2,j=2,Index=2,count=0,Prime_Table[100000],sum=0;
	scanf("%d", &N);
	Prime_Table[0] = 2;
	Prime_Table[1] = 3;
	if (N > 0 && N < 100000)
	{
		for (i = 4; i <= N; i++)
		{
			for (j = 2; j <= (int)sqrt(i); j++)
			{
				if (i%j != 0)
				{
					count++;
				}
			}
			if (count == (int)sqrt(i) - 1)
			{
				Prime_Table[Index] = i;
				Index++;
			}
			count = 0;
		}
		for (i = 0; i <= Index - 2; i++)
		{
			if (Prime_Table[i + 1] - Prime_Table[i] == 2)
			{
				sum++;
			}
		}
		printf("%d", sum);
	}
	return 0;
}