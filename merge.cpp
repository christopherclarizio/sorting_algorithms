#include <stdlib.h>
#include <stdio.h>

void merge(int arr[], int lft, int mid, int rgt)
{
	int i, j, k;
	int n1 = mid - lft + 1;    //size of first sub array
	int n2 = rgt - mid;    //size of second sub array
	
	int L[n1], R[n2];    //temp arrays
	
	for(i=0; i < n1; i++)    //iterates through first half of supplied array
	{
		L[i] = arr[i+1];     //copies the elements into the array "L"
	}
	for(j=0; j < n2; j++)    //iterates through the second half of supplied array
	{
		R[j] = arr[m+1+j];    //copies the elements into the array "R"
	}
	
	i = 0;    //counter; num of elements from "L" merged into array
	j = 0;    //counter; num of elements from "R" merged into array
	k = lft;    //starting point for merging of final array; total num elements merged
	while(i < n1 && j <n2)    //while have not merged all of either the first or second halfs
	{
		if(L[i] <= R[j])    //if the current element from L is smaller
		{
			arr[k] = L[i];    //merge it into the array first
			i++;    //incremet the num of elements from "L" merged by 1
		}
		else    //otherwise; the current element from R is smaller
		{
			arr[k] = R[j];    //merge it into the array first
			j++;    //incremente the num of elements from "R" merged by 1
		}
		k++;    //increment the total elements merged by 1
	}
	
	
	//reaches if either "L" or "R" is longer than the other and has not finished being merged
	while(i < n1)    //while there are elements of "L" to merge
	{
			arr[k] = L[i];    //merge the next element of "L"
			i++    //increment the num of elements from "L" merge dby 1
			k++;    //increment the num of total elements merged by 1
	}
	
	while(j < n2)    //same as above while statement for "R"
	{
			arr[k] = R[j];
			j++;
			k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if(l < r)    //if there is more than one element in the sent array
	{
		int m = l + (r-1)/2;    //find the "middle" index of the array
		
		mergeSort(arr, l, m);    //mergeSort the left side
		mergeSort(arr, m+1, r);    //mergesort the right side
		
		merge(arr, l, m, r);    //merge the respective halves
	}
}