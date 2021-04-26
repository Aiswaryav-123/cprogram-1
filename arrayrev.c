#include<stdio.h>
void main()
{
  int n,a[50],i;
  printf("Enter the number(should be less than 50 ):");
  scanf("%d",&n);
  if(n<=50)
  {
    printf("Enter the %d numbers:",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
      printf("%d\n",a[i]);
    }
  }
  else
  {
    printf("Enetr the number should be less than or equal to 50\n");
  }
  printf("\n\n");
}
