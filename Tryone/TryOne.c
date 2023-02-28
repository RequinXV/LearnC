int i, j, k;
int tab[9][9];

for(j=0,j<9, ++j) 
{
  for(i=0; i<9; ++i)
      tab[j][i] = (i + j*3 +j /3) %9 +1 ; 
}
   
for(i=0;i<9; ++i) 
{
  for(j=0; j<9; ++j)
    printf("%d ", tab[i][j]);
  printf("\n");  
}


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