#include<stdio.h>
#include<string.h>
int main()
{
    char str[300];
    int i,j;
    gets(str);
    for(i='A';i<'z';i++)
    {
        int count =0;
        for(j=0;j<strlen(str);j++)
        {
            if(i==str[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%c -> %d\n",i,count);
        }
    }
    return 0;
}
