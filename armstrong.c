#include<stdio.h>

int main()
{
	int  n = 151, sum =0;
	int temp = n;

	while(temp != 0)
	{
		int rem = temp % 10;
		sum =  sum + (rem*rem*rem);
		temp = temp/10;
	}

	if(sum == n)
	{
		printf("Its an Armstrong number\n");
	}

	else{
		printf("Not an Armstrong number\n");
	}

	return 0;
}
