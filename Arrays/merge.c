#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], merged[10];
    printf("Enter 5 integers for array 1: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 5 integers for array 2: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 5; i++) {
        merged[i] = arr1[i];
        merged[i + 5] = arr2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
