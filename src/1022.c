# include<stdio.h>
# include<math.h>
int main()
{
	int A, B,i=0,j=0, temp,D,temp1=0,count[32];
	scanf("%d %d %d", &A, &B,&D);
	if (A > 0 && B > 0)
	{
		 temp = A + B;
	}
	if (D > 1 && D <= 10)
	{
		while (temp != 0)
		{
			temp1 = temp % D;
			count[i] = temp1;
			temp = temp / D;
			i++;
		}
	}
	for (j = 0; j <= i - 1; j++)
	{
		printf("%d",count[i - 1 - j]);
	}
	return 0;
}