#include<stdio.h>

void decToBinary(int n) 
{ 
	// array to store binary number 
	int binaryNum[1000]; 

	// counter for binary array 
	int i = 0; 
	while (n > 0) { 

		// storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 

	// printing binary array in reverse order
	int j;
	for (j = i - 1; j >= 0; j--) 
		printf("%d",binaryNum[j]); 
} 

int main()
{
	int n = 0x03;
	int i;

	int temp = 0;

	for(i=3; i<=6; i++)
	{
		n = n | (1 << i);
	}

	//printf("%x\n",n);
	decToBinary(n);

	return 0;
}
