// 1 - Suite de Fibonacci 
// 2 - Nombres premiers jusqu'à l'input
// 3 - Input pair ou impair et multiple de 3
// 4 - 3 input et return le plus grand
#include <stdio.h>

int prem1(int n){
    for (int i= 0; i < n; i++){
        if(i % n == 0){
            return 0;
        }
        else{
        printf("%d est un nombre premier.", i);
        }
    }
    return 1;
}
// https://perso.isima.fr/loic/unixc/tpc-01-sudoku.php