#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, k;
    int minRow, colIndex;
    int saddleFound = 0;

    printf("Enter elements of a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for(i = 0; i < 3; i++) {
        minRow = matrix[i][0];
        colIndex = 0;
        for(j = 1; j < 3; j++) {
            if(matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for(k = 0; k < 3; k++) {
            if(matrix[k][colIndex] > minRow) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("\nSaddle Point found: %d at position (%d, %d)\n", minRow, i+1, colIndex+1);
            saddleFound = 1;
        }
    }

    if(!saddleFound)
        printf("\nNo Saddle Point found in the matrix.\n");

    return 0;
}

