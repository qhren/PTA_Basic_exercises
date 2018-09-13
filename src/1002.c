# include<stdio.h>
int main()
{ char n[100];
  int temp,i=1,j=1,k=0,sum=0,count=3,array[3];
  scanf("%s",n);
  while(n[k]!='\0')
  {
    temp=n[k]-'0';
    sum=sum+temp;
    k++;
  }
  while(sum!=0)
  {
    array[count-i]=sum%10;
    sum=sum/10;
    i++;
  }
  for(j=count-i+1;j<=count-1;j++)
  {
    if(array[j]==0)
       printf("ling");
    else if(array[j]==1)
           printf("yi");
    else if(array[j]==2)
           printf("er");
    else if(array[j]==3)
           printf("san");
    else if(array[j]==4)
           printf("si");
    else if(array[j]==5)
           printf("wu");
    else if(array[j]==6)
           printf("liu");
    else if(array[j]==7)
           printf("qi");
    else if(array[j]==8)
           printf("ba");
    else if(array[j]==9)
           printf("jiu");
    else
        printf("shi");
    if(j!=count-1)
       printf(" ");
    
  }
}