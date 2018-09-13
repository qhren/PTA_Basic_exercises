#include<stdio.h>
int main()
{
	long long A[10], B[10], C[10];
	int i, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%lld %lld %lld", &A[i], &B[i], &C[i]);
	}
	for (i = 1; i <= N; i++)
	{
		if (A[i - 1] + B[i - 1] > C[i - 1])
		{
			printf("Case #%d: true\n", i);
		}
		else
		{
			printf("Case #%d: false\n", i);
		}
	}
	return 0;
}