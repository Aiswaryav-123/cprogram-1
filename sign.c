#include<stdio.h>
void main()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  if(a>0)
  {
    printf("%d is positive\n",a);
  }
  else if(a<0)
  {
    printf("%d is negetive\n",a);
  }
  else
  {
    printf("The number is zero\n");
  }
}
