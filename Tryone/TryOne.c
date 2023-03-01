#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 9
#define EMPTY 0

void printGrid(int grid[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int isValid(int grid[N][N], int row, int col, int num) {
    // Check row
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num) {
            return 0;
        }
    }
    // Check column
    for (int i = 0; i < N; i++) {
        if (grid[i][col] == num) {
            return 0;
        }
    }
    // Check sub-grid
    int subRow = (row / 3) * 3;
    int subCol = (col / 3) * 3;
    for (int i = subRow; i < subRow + 3; i++) {
        for (int j = subCol; j < subCol + 3; j++) {
            if (grid[i][j] == num) {
                return 0;
            }
        }
    }
    return 1;
}

int fillGrid(int grid[N][N], int row, int col) {
    if (row == N - 1 && col == N) {
        return 1;
    }
    if (col == N) {
        row++;
        col = 0;
    }
    if (grid[row][col] != EMPTY) {
        return fillGrid(grid, row, col + 1);
    }
    for (int num = 1; num <= N; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;
            if (fillGrid(grid, row, col + 1)) {
                return 1;
            }
        }
        grid[row][col] = EMPTY;
    }
    return 0;
}

void generateGrid(int grid[N][N], int difficulty) {
    // Generate a random seed for the random number generator
    srand(time(NULL));
    // Fill the grid with zeros
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            grid[i][j] = EMPTY;
        }
    }
    // Fill the grid using backtracking
    fillGrid(grid, 0, 0);
    // Remove cells to create the desired difficulty level
    int cellsToRemove = difficulty * 10;
    while (cellsToRemove > 0) {
        // Choose a random cell to remove
        int row = rand() % N;
        int col = rand() % N;
        if (grid[row][col] != EMPTY) {
            grid[row][col] = EMPTY;
            cellsToRemove--;
        }
    }
}

int main() {
    int grid[N][N];
    generateGrid(grid, 1);
    printGrid(grid);
    return 0;
}







// int i, j, k;
// int tab[9][9];

// for(j=0,j<9, ++j) 
// {
//   for(i=0; i<9; ++i)
//       tab[j][i] = (i + j*3 +j /3) %9 +1 ; 
// }
   
// for(i=0;i<9; ++i) 
// {
//   for(j=0; j<9; ++j)
//     printf("%d ", tab[i][j]);
//   printf("\n");  
// }


// bool estValide (int grille[9][9], LIST* position){
//     nombre++;
//     if(position == NULL){
//         return True;
//     }
//     int i = postion ->i, j = position->j;
//     int k;
//     for (k=0; k<9; K++){
//         //verifier dans les tableaux si la values est déja presente
//         if ( !existeSurLigne[i][k] && !existeSurLigne[j][k] && !existeSurLeBloc[3*(i/3)+(j/3)[k]]){

//             existeSurLigne[i][k] + existeSurCollone[j][k] = existeSurBloc[3*(i/3)+(j/3)[k]] = 1;
//             if(estValide(grille,position->next)){
//                 grille[i][j]=k+1
//                 return 1
//             }
//             existeSurligne[i][k]= existeSurColonne[j][k] = existeSurBlock[3*(i/3)+(j/3)[k] = 0];
//         }
//     }
//     return 0 
// }


// Sudoku():booléen
// VARIABLES GLOBALES
//    G: tableau de (N^2) entiers
//    n: entier
// VARIABLES
//    case, bit: entiers
//    onatrouvé: booléen
//    B: tableau de taille N^2 entiers
// DEBUT
//    onatrouvé ← FAUX
//    case ← BouclerRègles
//    SI (case ≥ 0)
//       bit ← 1;
//       TQ (bit ≤ n*n ET NON(onatrouvé))
//          SI ((1 << bit) ∧ G[case]) > 0)
//             B ← G;
//             G[case] ← 1 << bit;                  
//             Sudoku();
//             SI NON(onatrouvé)
//                G ← B
//          bit ← bit + 1
//       FTQ
//    SINON SI (case = -1)
//       onatrouvé ← VRAI
//    RENVOYER onatrouvé
// FIN
