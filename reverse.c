#include<stdio.h>
void main()
{
  int n,l,rev=0;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n>0)
  {
    l=n%10;
    rev=rev*10+l;
    n=n/10;

  }
  printf("reverse = %d\n",rev);

}
