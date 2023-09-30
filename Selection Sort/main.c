#include <stdio.h>

int main()
{
    int size;

    printf("Define Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Your Input Numbers:\n");

    // input array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // output sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}
