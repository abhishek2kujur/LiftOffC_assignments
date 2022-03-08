#include<stdio.h>
#include<string.h>
void main()
{
    int l,s,c=0,i;
    char N[50];
    printf("Enter an integer=");
    scanf("%s",N);
    l=strlen(N);
    for(i=0;i<=l/2;i++)
    {
        if(N[i]==N[l-i-1])
        {
            c++;
        }
    }
    if(c==((l/2)+1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}