#include<stdio.h>
int main()
{
    int a,b,c,x;
    float m;
    printf("If you want addition choose ...1...  \n  If you want subtraction choose ...2...  \n  If you want multiplication choose ...3...  \n  If you want division choose ...4...  \n   If you want remainder choose ...5...  \n");
    scanf("%d",&c);
    printf("Enter two numbers you want to do the operation");
    scanf("%d %d" ,&a ,&b);
    switch(c)
    {
        case 1:
            x=a+b;
            printf("the sum of the two numbers is  : %d " ,x);
            break;
        case 2:
            x=a-b;
            printf("the difference of the two numbers is  : %d  " ,x);
            break;
        case 3:
            x=a*b;
            printf("the product of the numbers is  : %d   " ,x);
            break;
        case 4:
            m=a/(float)b;
            printf("the quotient of the numbeers is  : %f  " ,m);
            break;
        case 5:
            x=a%b;
            printf("the remainder of the number is  : %d  " ,x);
            break;
        default:
            printf("please choose from the available options ");

    }
    return 0;
}
