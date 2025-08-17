#include<stdio.h>
#define N 8
int column[N + 1],
rup[2 * N + 1],
lup[2 * N + 1],
qeen[N + 1];
void backtracking(int i)
{
	int j, x, y;
	static int num = 0;

	if (i > N)
	{
		printf("\nA: %d\n", ++num);
		for (y = 1; y <= N; y++) {
			for (x = 1; x <= N; x++) {
				if (qeen[y] == x)
					printf(" Q");
				else
					printf(" .");
			}
			printf("\n");
		}
	}
	else
	{
		for (j = 1; j <= N; j++) {
			if (column[j] == 1 && rup[i + j] == 1 && lup[i - j + 1] == 1)
			{
				qeen[i] = j;
				column[j] = 0;
				rup[i + j] = 0;
				lup[i - j + N] = 0;
				backtracking(i + 1);
				column[j] = 1;
				rup[i + j] = 1;
				lup[i - j + N] = 1;
			}
		}
	}
}
void main()
{
	int i;
	for (i = 1; i <= N; i++)//init
		column[i] = 1;
	for (i = 1; i <= 2 * N; i++)//init
		rup[i] = lup[i] = 1;
	backtracking(1);
}