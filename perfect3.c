//To find first 4 perfect numbers
#include<stdio.h>
void main()
{
  int n,i,sum,count=0;
  n=1;
  while(count<4)
  {
      i=1;
      sum=0;
      while(i<n)
      {
         if(n%i==0)
         {
            sum=sum+i;
         }

      i++;
      }
      if(sum==n)
      {
         printf("%d\n",n);
         count=count+1;

      }
      n++;
 }
}
