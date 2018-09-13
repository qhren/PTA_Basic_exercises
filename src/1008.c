# include<stdio.h>
int main()
{
	int i,N[100], temp[100], M,n;
	scanf("%d %d", &n,&M);
	for (i = 0; i < 100; i++)
	{
		N[i] = 0;
		temp[i] = 0;
	}
	for (i = 0; i < n; i++)
		scanf("%d", &N[i]);
	for (i = 0; i < n; i++)
	{
		if ((i + M) >= n)
		{
			temp[(i + M) % n] = N[i];
		}
		else
			temp[i + M] = N[i];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", temp[i]);
		if (i < n - 1)
			printf(" ");
	}
	return 0;
}