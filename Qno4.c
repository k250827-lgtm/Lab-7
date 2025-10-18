#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int last = arr[5];
    int i;
    
    for ( i = 5; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printf("Array after right shift is : ");
    for ( i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
