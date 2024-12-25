#include<stdio.h>

void funx(int*);

void funx(int* parray)
{
	for (int i = 0; i < 5; i++)
	{
		parray[i] = 2 * parray[i];
	}
}

int main(void)
{
	int array[5] = {1,2,3,4,5};
	int* ptr;
	int i;

	ptr = array;
	for (i = 0; i < 5; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");

	funx(ptr);
	for (i = 0; i < 5; i++)
	{
		printf("%d", array[i]);
	}
	return 0;
}