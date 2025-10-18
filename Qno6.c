#include <stdio.h>

int main() {
    int arr[10];
    int i, sum = 0;

    printf("Enter 10 integers representing daily profit (+) or loss (-):\n");

    for(i = 0; i < 10; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
    	// for positive values
        if(arr[i] > 0) {      
            sum += arr[i];
        }
    }

    printf("\n? Total sum of positive profits = %d\n", sum);

    return 0;
}

