//To find perfect numbers upto 10000
#include<stdio.h>
void main()
{
  int n,i,sum;
  n=1;
  while(n<=10000)
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

          }

  n++;
  }
}
