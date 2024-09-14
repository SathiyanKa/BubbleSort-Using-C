#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Array Size :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Elements :");
    for(int i = 0;i < size; i++)
        scanf("%d",&arr[i]);

    int swapped = 0;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
            if(swapped == 0)
                break;
    }
    for(int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    return 0;
}
