#include <stdio.h>
#define SIZE 5
void insertion_sort(int *arr, int size)
{
    int key,j;
    for(int i=1;i<size;i++)
    {
        key = arr[i];
        j=i-1;
        while(key < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertion_sort(arr, SIZE);
    printf("After sorting, array elements: ");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
