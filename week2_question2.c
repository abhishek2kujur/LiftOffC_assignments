#include<stdio.h>
#include<math.h>
int main()
{
    int N, T, i = 0, j, k = 0, Swap;
    scanf("%d", &N);
    T = N;
    while (T > 0)
    {
        k++;
        T = T / 10;
    }
    i = (N / pow(10, k - 1));
    j = N % 10;
    Swap = j;
    Swap = Swap * pow(10, k - 1);
    int Z = (pow(10, k - 1));
    Swap = Swap + N % Z;
    Swap -= j;
    Swap += i;
    printf(" %d", Swap);
    return 0;
}