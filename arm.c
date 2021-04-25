#include<stdio.h>
#include<math.h>
void main()
{
    int n,ncopy,ncopy2,l=0,sum=0,d;
    printf("Enter the number :");
    scanf("%d",&n);
    ncopy=n;
    ncopy2=n;
    // l is the number of digits of n
    while(n>0)
    {
        n=n/10;
        l++;
    }
    while(ncopy>0)
    {
        d=ncopy%10;
        sum=sum+pow(d,l);
        ncopy=ncopy/10;
    }
    if(sum==ncopy2)
    {
        printf("%d is amstrong number\n",ncopy2);
    }
    else
    {
        printf("%d is not an amstrong number\n",ncopy2);
    }
}
