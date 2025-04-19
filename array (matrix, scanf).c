#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[2][5];
    int i, j;

    printf("Enter marks for 2 students:\n");

    for (i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  Mark %d: ", j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("\nEntered marks:\n");
    for (i = 0; i < 2; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
