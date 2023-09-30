#include <stdio.h>

int main() {
    int size;

    printf("Define Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Your Input Numbers:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int search;
    printf("Searching Value of Number: ");
    scanf("%d", &search);

    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            printf("Searching Index Number: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Searching Item Not Found\n");
    }

    return 0;
}
