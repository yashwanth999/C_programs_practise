#include<stdio.h>

int main()
{
	int a[] = {1,1,-5,5,0};
	int size = (sizeof(a)/(sizeof(a[0])));
	int count =0, i=0;
	
	for(i=0; i<size-1; i+=2)
	{
		if((a[i]+a[i+1]) == 0)
		{
			count ++;
		}
	
		else {
			continue;
		} 
	}
	printf("%d\n", count);

	return 0;
}
