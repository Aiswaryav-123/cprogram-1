#include<stdio.h>
void main()
{
  float a,b,s,d,p,q;
  printf("\n*****************\n");
  printf("Enter the first number:");
  scanf("%f",&a);
  printf("Enter the second number:");
  scanf("%f",&b);
  s=a+b;
  d=a-b;
  p=a*b;
  q=a/b;
  printf("%f + %f = %f\n",a,b,s);
  printf("%f - %f = %f\n",a,b,d);
  printf("%f x %f = %f\n",a,b,p);
  printf("%f / %f = %f\n",a,b,q);

  printf("\n*****************\n");
}
