#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int imin(int, int);

int main(void)
{
	int evi11, evi12;

	printf("Enter a pair of integers (q to quit) : \n");
	while (scanf("%d %d", &evi11, &evi12) == 2);
	{
		printf("The lesser of %d and %d is %d.\n",
			evi11, evi12, imin(evi11, evi12));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("Bye.\n");
	return 0;
}

int imin(int n, int m)
{
	int min;

	if (n < m)
		min = n;
	else
		min = m;

	return min;
}
