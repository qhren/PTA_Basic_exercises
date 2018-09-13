#include<stdio.h>
int main()
{
	char A[12], B[12];
	int D_a, D_b,i,count_a=0,count_b=0;
	scanf("%s %d %s %d", &A, &D_a, &B, &D_b);
	for (i = 0; A[i] != '\0'; i++)
	{
		if ((int)(A[i]-'0') == D_a)
		{
			count_a = count_a * 10 + D_a;
		}
	}
	for (i = 0; B[i] != '\0'; i++)
	{
		if ((int)(B[i]-'0') == D_b)
		{
			count_b = count_b * 10 + D_b;
		}
	}
	printf("%d",count_a+count_b);
	return 0;
}