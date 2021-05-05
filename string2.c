//TO REVERSE A WORD
#include<stdio.h>
int main()
{
    char a[10];
    int i,length=0;
    printf("What is the word:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    for(i=length-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    printf("\n");

}
