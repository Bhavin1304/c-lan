#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int arr[ROWS][COLS];
    int i, j;

    
    int *ptr = &arr[0][0];

   
    printf("Enter %d elements for the %dx%d array:\n", ROWS * COLS, ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    printf("\nOriginal Array:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

   
    for (i = 0; i < ROWS * COLS; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
    }

  
    printf("\nArray after cubing elements:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

