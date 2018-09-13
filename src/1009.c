#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0, count=0;
	char string[81];
	char temp[81][81];
	gets(string);
	for (i = 0; string[i] != '\0'; i++,j++)
	{
		temp[count][j] = string[i];
		if (string[i] == ' ')
		{
			temp[count][j] = '\0';
			count++;
			j = -1;
		}
	}//计算单词个数 单词=空格数+1
	temp[count][j] = '\0';
	for (j = 0; j <= count; j++)
	{
		printf("%s", temp[count-j]);
		if (j != count)
		{
			printf(" ");
		}
	}
	return 0;
}