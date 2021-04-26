#include<stdio.h>
void main()
{
  int n,m,i=1,p;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Enter the number of multipiles:");
  scanf("%d",&m);
  while(i<=m)
  {
      p=i*n;
      printf("%2d x %2d = %d\n",i,n,p);
      i++;
  }
}
