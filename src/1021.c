#include<stdio.h>
int main()
{
	char N[1001];
	int temp[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i;
	scanf("%s", N);
	for (i = 0; N[i] != '\0'; i++)
	{
		switch (N[i]-'0')
		{
		    case 0:temp[0]++; break;
			case 1:temp[1]++; break;
			case 2:temp[2]++; break;
			case 3:temp[3]++; break;
			case 4:temp[4]++; break;
			case 5:temp[5]++; break;
			case 6:temp[6]++; break;
			case 7:temp[7]++; break;
			case 8:temp[8]++; break;
			case 9:temp[9]++; break;
		    default:
			break;
		}
	}
	for (i = 0; i <= 9; i++)
	{
		if (temp[i] != 0)
		{
			printf("%d:%d\n", i, temp[i]);
		}
	}
	return 0;
}