#include<stdio.h>
void main()
{
  int n,a[50],i,sum=0;
  printf("Enter the number(should be less than 50):");
  scanf("%d",&n);
  if(n<=50)
  {
    printf("Enter the %d numbers:",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    printf("sum = %d",sum );

  }
  else
  {
    ("Enter the number should be less or equal to 50");
  }
  printf("\n\n");
}
