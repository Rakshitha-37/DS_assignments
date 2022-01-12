#include<stdio.h>
#define SIZE 5

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int partition(int *arr, int low, int high)
{
	int pivot = low, p = low+1, q = high;
	while(p <= q)
	{
		while(arr[p] < arr[pivot])
		{
			p++;
		}
		while(arr[q] > arr[pivot])
		{
			q--;
		}
		if(p < q)
		{
			swap(&arr[p], &arr[q]);
		}
	}
	swap(&arr[q], &arr[pivot]);
	return q;
}

void quick_sort(int *arr, int low, int high)
{
	int index;
	if(low < high)
	{
		index = partition(arr, low, high);
		quick_sort(arr, low, index-1);
		quick_sort(arr, index+1, high);
	}
}
int main()
{
	int arr[SIZE];
	printf("Enter array elements: ");
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d", &arr[i]);
	}
	quick_sort(arr, 0, SIZE-1);
	printf("After sorting, array elements: ");
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
