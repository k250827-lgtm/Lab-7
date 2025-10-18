#include <stdio.h>

int main() {
    int arr[12] = {1, 2, 4, 5, 7, 7, 7, 8, 9, 10, 10, 11};
    int num, newArr[12], j = 0, found = 0;

    printf("Array elements are: ");
    int i;
    for ( i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter number to remove: ");
    scanf("%d", &num);
    
    for ( i = 0; i < 12; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Take number from array or within limit!\n");
        return 0; 
    }

 
    for ( i = 0; i < 12; i++) {
        if (arr[i] != num) {
            newArr[j++] = arr[i];
        }
    }
    printf("Array after removing %d: ", num);
    for ( i = 0; i < j; i++) {
        printf("%d ", newArr[i]);
    }
    return 0;
}
