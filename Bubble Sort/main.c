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
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
