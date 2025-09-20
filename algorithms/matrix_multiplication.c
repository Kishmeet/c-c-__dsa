#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// -------- Matrix Operations --------
void addMatrix(int **A, int **B, int **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void subMatrix(int **A, int **B, int **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
}

// Standard multiplication
void standardMultiply(int **A, int **B, int **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

// Strassen multiplication
void strassenMultiply(int n, int **A, int **B, int **C) {
    if (n <= 2) { 
        standardMultiply(A, B, C, n);
        return;
    }

    int newSize = n / 2;

    // Allocate submatrices once
    int **M1 = malloc(newSize * sizeof(int*));
    int **M2 = malloc(newSize * sizeof(int*));
    int **M3 = malloc(newSize * sizeof(int*));
    int **M4 = malloc(newSize * sizeof(int*));
    int **M5 = malloc(newSize * sizeof(int*));
    int **M6 = malloc(newSize * sizeof(int*));
    int **M7 = malloc(newSize * sizeof(int*));
    int **T1 = malloc(newSize * sizeof(int*));
    int **T2 = malloc(newSize * sizeof(int*));

    for (int i = 0; i < newSize; i++) {
        M1[i] = malloc(newSize * sizeof(int));
        M2[i] = malloc(newSize * sizeof(int));
        M3[i] = malloc(newSize * sizeof(int));
        M4[i] = malloc(newSize * sizeof(int));
        M5[i] = malloc(newSize * sizeof(int));
        M6[i] = malloc(newSize * sizeof(int));
        M7[i] = malloc(newSize * sizeof(int));
        T1[i] = malloc(newSize * sizeof(int));
        T2[i] = malloc(newSize * sizeof(int));
    }

    // Split matrices using pointers
    int **A11 = malloc(newSize * sizeof(int*));
    int **A12 = malloc(newSize * sizeof(int*));
    int **A21 = malloc(newSize * sizeof(int*));
    int **A22 = malloc(newSize * sizeof(int*));
    int **B11 = malloc(newSize * sizeof(int*));
    int **B12 = malloc(newSize * sizeof(int*));
    int **B21 = malloc(newSize * sizeof(int*));
    int **B22 = malloc(newSize * sizeof(int*));

    for (int i = 0; i < newSize; i++) {
        A11[i] = A[i];            A12[i] = A[i] + newSize;
        A21[i] = A[i + newSize];  A22[i] = A[i + newSize] + newSize;
        B11[i] = B[i];            B12[i] = B[i] + newSize;
        B21[i] = B[i + newSize];  B22[i] = B[i + newSize] + newSize;
    }

    // Compute M1-M7
    addMatrix(A11, A22, T1, newSize);
    addMatrix(B11, B22, T2, newSize);
    strassenMultiply(newSize, T1, T2, M1);

    addMatrix(A21, A22, T1, newSize);
    strassenMultiply(newSize, T1, B11, M2);

    subMatrix(B12, B22, T2, newSize);
    strassenMultiply(newSize, A11, T2, M3);

    subMatrix(B21, B11, T2, newSize);
    strassenMultiply(newSize, A22, T2, M4);

    addMatrix(A11, A12, T1, newSize);
    strassenMultiply(newSize, T1, B22, M5);

    subMatrix(A21, A11, T1, newSize);
    addMatrix(B11, B12, T2, newSize);
    strassenMultiply(newSize, T1, T2, M6);

    subMatrix(A12, A22, T1, newSize);
    addMatrix(B21, B22, T2, newSize);
    strassenMultiply(newSize, T1, T2, M7);

    // Combine results
    for (int i = 0; i < newSize; i++
) {
        for (int j = 0; j < newSize; j++) {
            C[i][j] = M1[i][j] + M4[i][j] - M5[i][j] + M7[i][j];
            C[i][j + newSize] = M3[i][j] + M5[i][j];
            C[i + newSize][j] = M2[i][j] + M4[i][j];
            C[i + newSize][j + newSize] = M1[i][j] - M2[i][j] + M3[i][j] + M6[i][j];
        }
    }

    // Free memory
    for (int i = 0; i < newSize; i++) {
        free(M1[i]); free(M2[i]); free(M3[i]); free(M4[i]);
        free(M5[i]); free(M6[i]); free(M7[i]); free(T1[i]); free(T2[i]);
    }
    free(M1); free(M2); free(M3); free(M4); free(M5); free(M6); free(M7);
    free(T1); free(T2); free(A11); free(A12); free(A21); free(A22);
    free(B11); free(B12); free(B21); free(B22);
}

// Allocate square matrix
int** allocateSquareMatrix(int n) {
    int **mat = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        mat[i] = malloc(n * sizeof(int));
    return mat;
}

// Fill matrix with random numbers
void fillRandom(int **mat, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = rand() % 10;
}

// Print matrix
void printMatrix(int **mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter size of square matrix (power of 2): ");
    scanf("%d", &n);

    int **A = allocateSquareMatrix(n);
    int **B = allocateSquareMatrix(n);
    int **C_std = allocateSquareMatrix(n);
    int **C_strassen = allocateSquareMatrix(n);

    srand(time(NULL));
    fillRandom(A, n);
    fillRandom(B, n);
    if (n <= 8) { // print small matrices
        printf("Matrix A:\n"); printMatrix(A, n);
        printf("Matrix B:\n"); printMatrix(B, n);
    }   

    clock_t start = clock();
    standardMultiply(A, B, C_std, n);
    clock_t end = clock();
    printf("Standard multiplication time for %d x %d: %f s\n", n, n, (double)(end - start)/CLOCKS_PER_SEC);

    start = clock();
    strassenMultiply(n, A, B, C_strassen);
    end = clock();
    printf("Strassen multiplication time for %d x %d: %f s\n", n, n, (double)(end - start)/CLOCKS_PER_SEC);

    if (n <= 8) { // print small matrices
        printf("Result (Standard):\n"); printMatrix(C_std, n);
        printf("Result (Strassen):\n"); printMatrix(C_strassen, n);
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        free(A[i]); free(B[i]); free(C_std[i]); free(C_strassen[i]);
    }
    free(A); free(B); free(C_std); free(C_strassen);

    return 0;
}
