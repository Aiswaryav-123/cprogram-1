#include<stdio.h>
void main()
{
    int n,d=0,a=0,b=1,c=a;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    while(d<n)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
        d++;
    }

}
