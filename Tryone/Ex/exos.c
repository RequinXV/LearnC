#include <stdio.h>

int longueur(char texte[]);
void copie(char str[], char strcopie[]);
void intext(char text[], char lettre[]);
int searchword(char texte[], char mot[]);

int main(void){
    char texte[100] = "Texte à analyser";
    char str[100] = "Texte à copier";
    char lettre[2] = "t";
    int nbChar = longueur(texte);
    char copieStr[100];
    copie(str, copieStr);
    intext(texte, lettre);
    // int wordFind = searchword(texte, "analyser");
    

    return 0;
}

int longueur(char texte[]){
    int i;
    for(i=0; texte[i] != '\0'; i++);
    printf("Le texte contient %d caractères\n", i);
    return i;
}

void copie(char str[], char strcopie[]){
    int i;
    for (i = 0; str[i] != '\0'; i++){
        strcopie[i] = str[i];
    }
    strcopie[i] = '\0';
    printf("La copie de la chaîne est: %s\n", strcopie);
}

void intext(char text[], char lettre[]){
    int i;
    for (i = 0; text[i] != '\0'; i++){
        if (text[i] == lettre[0] ){
            printf("La lettre %c a été trouvée à la position %d\n", lettre[0], i);
            return;
        }
    }
    printf("La lettre %c n'a pas été trouvée\n", lettre[0]);
}

// int searchword(char texte[], char mot[]){
//     int i, j, found;
//     for (i = 0; texte[i] != '\0'; i++){
//         if (texte[i] == mot[0]){
//             found = 1;
//             for (j = 1; mot[j] != '\0'; j++){
//                 if (texte[i+j] != mot[j]){
//                     found = 0;
//                     break;
//                 }
//             }
//             if (found){
//                 printf("Le mot %s a été trouvé à la position %d\n", mot, i);
//                 return i;
//             }
//         }
//     }
//     printf("Le mot %s n'a pas été trouvé\n", mot);
//     return -1;
// }