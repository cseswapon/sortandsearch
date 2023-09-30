#include <stdio.h>

int main()
{
    int size;

    printf("Define Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Your Input Numbers:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int length = size;

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
