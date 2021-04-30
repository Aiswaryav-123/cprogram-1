//TO  PRINT NATURAL NUMBERS B/W TWO LIMITS
 #include<stdio.h>
void main()
{
  int a,b,n;
  printf("Enter the limits:");
  scanf("%d%d",&a,&b);
  n=a;
  while(n<=b);
  {
    printf("%d",n);
    n=n+1;
  }


}
