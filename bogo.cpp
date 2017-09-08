#include <stdlib.h>

bool isSorted(int arr[])
{
	for(int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)    //iterate through array starting with second element
	{
		if(arr[i-1] > arr[i])    //if there is any element with a larger number to its left
		{
			return false;    //return false; the array is not sorted
		}
	}
	return true;    //return true
}


void bogoSort(int arr[])
{	
	int temp;
	while(!isSorted(arr))
	{
		i = rand() % (sizeof(arr) / sizeof(arr[0]));    //generate two random indices
		j = rand() % (sizeof(arr) / sizeof(arr[0]));
		temp = arr[i];    //swap the random array elements
		arr[i] = j;
		arr[j] = temp;
	}
}