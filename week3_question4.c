#include<stdio.h>
int swap(int *,int *);
int main()
{
    int n1,n2;	   
    printf("enter numbers to be swapped  \n");
    scanf("%d%d",&n1,&n2);	
    printf("Before swap n1 = %d   \n ",n1);
    printf("before swap n2 = %d    \n",n2);
	swap(&n1,&n2);
    printf("Before swap n1 = %d    \n",n1);
    printf("before swap n2 = %d ",n2);
    return 0;
}
int swap(int *p,int *q)
{

    int t;
    t=*p;
    *p=*q;  
    *q=t;  
}
