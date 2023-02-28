#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char titre[100];
    float prix;
    int quantite;
    char rep;
    float total = 0.0;
    float taxes = 0.0;

    while (1) {
        printf("Titre : ");
        scanf("%s", titre);
        printf("Prix /u : ");
        scanf("%f", &prix);
        printf("Quantite : ");
        scanf("%d", &quantite);
        
        // Calcul du total pour cette ligne d'achat
        float total_ligne = prix * quantite;

        // Ajout du total pour cette ligne d'achat au total global
        total += total_ligne;

        printf("Voulez-vous ajouter une autre ligne (O/N) ?\n");
        scanf("%s", &rep);
        char reponse = rep;
        if (reponse == 'N' || reponse == 'n') {
            break;
        }
        
        // Affichage des informations pour chaque ligne d'achat
        printf("| Titre | Prix /u | Quantite | Total |\n"); 
        printf("| %s | %f €/u | %d | %f € |\n", titre, prix, quantite, total_ligne);
    }
    
    // Calcul des taxes
    taxes = total * 0.2; // 20% de taxes

    // Affichage du total global
    printf("| Total | | | %f € |\n", total);
    printf("| Taxes | | | %f € |\n", taxes);
}

