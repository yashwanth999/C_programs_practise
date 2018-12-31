#include<stdio.h>

struct sample
{
	int i;
	char c;
};

int main()
{
	struct sample s;
	int size;

	size = (int*)&s+1 - (int*)&s;
	printf("size is %d\n",sizeof(size));

	return 0;
}
