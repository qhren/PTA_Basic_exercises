#include<stdio.h>
int main()
{
	char A[1001]; 
	int quotient[1001];
	int B,i,remainder,temp,flag;
	scanf("%s %d", A,&B);//注意A小于B的情况
	if (B > 0)
	{
		for (i = 0; A[i] != '\0'; i++)
		{
			if (i == 0)
			{
				if ((int)(A[0] - '0') < B)
				{
					quotient[0] = 0;
					temp = (int)(A[0] - '0');
				}
				else
				{
					quotient[0] = ((int)(A[0] - '0') / B);
					temp = (int)(A[0] - '0') % B;
				}
			}
			else if (i > 0)
			{
				temp = temp * 10 + (int)(A[i] - '0');
				quotient[i] = (temp / B);
				temp = temp % B;
			}
		}
		flag = i - 1;
		for (i = 0; i <= flag; i++)
		{
			if (flag == 0)
			{
				printf("%d", quotient[i]);
			}
			else
			{
				if (quotient[0] == 0&&i!=0)
				{
					printf("%d", quotient[i]);
				}
				else if(quotient[0] !=0)
				{
					printf("%d", quotient[i]);
				}
			}
		}
		printf(" %d", temp);
	}
	return 0;
}