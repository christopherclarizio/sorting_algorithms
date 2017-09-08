//insertion sort

#include <stdio.h>
#include <math.h>

void insertionSort(int arr[], int n)
{
	int i,j, temp;
	for(i = 1; i < n; i++)    //iterate through the array
	{
		temp = arr[i];     //the value of the starting index
		j = i-1;    //j starts behindi by one
		while (j >= 0 && arr[j] > temp)    //while j is any index gte first element and the value of element j is greater than that of the starting position of i
		{
			arr[j+1] = arr[j];    //swap the values of the greater element
			j = j-1;	//decrement j by one
		}
		arr[j+1] = temp;    //set the value of j+1 to tempd
	}
	
}