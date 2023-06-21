#include <stdio.h>

int main() {
    int rows, columns;
    printf("Ingrese el número de filas que desea en la matriz: ");
    scanf("%d", &rows);
   
    printf("Ingrese el número de columnas que desea en la matriz: ");
    scanf("%d", &columns);
   
    int matrix[rows][columns];
     

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = 0;
        }
    }
   
    printf("Matriz:\n");
   

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
   

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
   
    printf("Matriz con unos en la diagonal:\n");
   

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
