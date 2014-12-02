#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int a[N];

void gen_random(int upper_bound)
{
	int i;
	srand(time(NULL));
	for (i = 1; i < N; i++)
		a[i] = rand() % upper_bound;
}

void print_random()
{
	int i, j, histogram[10] = {0};
	for (i = 0; i < N; i++) 
		histogram[a[i]]++;
		for(j = 0; j < 10; j++) {
		printf("%d  ", j);
		for(i = 0; i < histogram[j]; i++)
		printf("%c", '*');
	printf("\n");
	}
}

int main(void)
{
	gen_random(10);
	print_random();
	return 0;
}
