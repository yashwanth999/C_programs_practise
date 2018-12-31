#include<stdio.h>

int main()
{
	int i;
	int res;

	res = (char*)(&i+1)-(char*)(&i);
	printf("%d\n", res);

	return 0;
}
