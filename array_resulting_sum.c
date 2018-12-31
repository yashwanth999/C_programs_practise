#include<stdio.h>

// Returns number of pairs in arr[0..n-1] with sum equal 
// to 'sum' 
int getPairsCount(int arr[], int n, int sum) 
{ 
    int count = 0; // Initialize result 
    int  i,j; 
    // Consider all possible pairs and check their sums 
    for (i=0; i<n; i++) 
        for (j=i+1; j<n; j++) 
            if (arr[i]+arr[j] == sum) 
                count++; 
  
    return count; 
} 
  
// Driver function to test the above function 
int main() 
{ 
    int arr[] = {1, 5, 7, -1, 5} ; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 6; 
     int result = getPairsCount(arr, n, sum); 
    printf("Count of pairs is %d\n",result);
    return 0;
}
