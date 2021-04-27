//To check whether a number is prime or not
#include<stdio.h>
void main()
{
  int n,i,flag=0;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
      if(n%i==0)
      flag=1;
      break;
  }
  if(flag==1 && n>2)
  {
      printf("%d is a not prime number\n",n);
  }
  else
  {
      printf("%d is a prime number\n",n);
  }
}
