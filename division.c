#include<stdio.h>
void main()
{
  int n,n1=100,n2=200,count=1,sum=0;
  n=n1;
  while(n<=n2)
  {
    if(n%11==0)
    {
      printf("%d\n",n);
      count=count+1;
      sum=sum+("%d",n);
    }
    n=n+1;
  }
  printf("%d numbers are divisible by 11 between 100 and 200\n",count);
  printf("sum of the numbers divisible by 11 between 100 and 200=%d\n",sum);
}
