
#include <stdio.h>
void fdemo (int *p1, int *p2, int n)
{
	for (int i = 0; i < n; i++) 
	{
		*p1 += i;
		*p2 += i;
	}
		printf("without restrict, expected 90\n p1 %d, p2 %d\n", *p1, *p2);
		
}

void fdemo_restrict (int * restrict p1, int * restrict p2, int n)
{
	for (int i = 0; i < n; i++) 
	{
		*p1 += i; // cache to a place
		*p2 += i; // cache to another place
	}
		printf("with restrict, expected 45\n p1 %d, p2 %d\n", *p1, *p2);
}

void main()
{
	int i = 0;
	int j = 0;
	fdemo(&i, &i, 10);
	fdemo_restrict(&j, &j, 10);
}
