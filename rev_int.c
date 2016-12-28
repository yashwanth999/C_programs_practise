#include<stdio.h>

int main()
{


	int n=9876;
	int rn=0,rem;

	printf("Integer is  %d\n",n);
	
	while(n!=0)
	{
	rem=n%10;
	rn = rn*10+rem;
	n=n/10;
	}
	printf("Reverse Integer is  %d\n",rn);

	return 0;
}

