#include <stdio.h>
#include <string.h>
int main()
{
	int T, L, i, P = 0, Q = 0;
	scanf("%d", &T);
	while (T>0)
	{
		char S[50];
		scanf("%s", S);
		L = strlen(S);
		for (i = 0; i < L; i++)
		{
			if (S[i] == '0')
			{
				P++;
			}
			else
			{
				Q++;
			}
		}
		if (P > Q)
		{
			printf("%d\n", Q);
			P = 0;
			Q = 0;
		}
		else if (P == Q)
		{
			printf("0\n");
			P = 0;
			Q = 0;
		}
		else
		{
			printf("%d\n", P);
			P = 0;
			Q = 0;
		}
	}

	return 0;
}