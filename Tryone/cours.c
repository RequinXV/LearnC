unsigned char chiffre = 3; // 256 
unsigned int grosChiffre = 23984; // 65 535
unsigned long tresGrosChiffre = 193783; // 4 294 967 295

//unsigned float decimale = 24.2; // 2074

char chiffreNeg = 3; // 127 
int grosChiffreNeg = 23984; // 32 767
long tresGrosChiffreNeg = 193783; // 2 147 483 647

float decimaleNeg = 2.2; // 1 x1037
double decimaleDoubleNeg = 2.2; // 1 x1037

const int CONSTANTE = 5;

int function(int groshiffr){
    groshiffr = groshiffr - 1;

    // Afficher un message
    
    printf("Ceci est un integer : %d !",  chiffreNeg);
    printf("Ceci est un integer positif : %u !",  grosChiffre);
    printf("Ceci est un long integer : %ld !",  tresGrosChiffreNeg);
    printf("Ceci est un floaty ou double : %f !",  decimaleNeg);

    printf("Je peux aussi, %d en afficher plusieurs %d", chiffreNeg, groshiffr);

    return groshiffr;
}

int getScore(){
      int score = 0; // On initialise la variable à 0
  
  printf("Quel score avez-vous ? ");
  scanf("%d", &score); // On demande d'entrer le score avec scanf
  printf("Ah ! Vous avez donc %d points !\n\n", score);
       
  return 0;
}

int increment(int base ){
    //L'incrementation
    base++;
    //la decrementation = 
    base--;

    //on observe aussi les methodes suivantes
    int nombre = 2;

    nombre += 4; // nombre vaut 6...
    nombre -= 3; // ... nombre vaut maintenant 3
    nombre *= 5; // ... nombre vaut 15
    nombre /= 3; // ... nombre vaut 5
    nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)


    return base;
}

int arythmetique(int base){

    /*
    Avec la bibliotheque suivante : 
    #include <math.h>
    Nous pouvons utiliser une multitude de fonctions supplémentaires soit : 
    */

    // Renvoie la valeur absolue (donc toujours positive) (renvoie un double)
    double absolue = fabs(base);

    //Renvoie l'arrondi supérieur (en double)
    double arrondiDessus = ceil(base);

     //Renvoie l'arrondi inférieur (en double)
    double arrondiDessous = floor(base);

    //Met en puissance le nombre par le parametre 2
    double puissance = pow(base, 4); // base^4
    
    //La racine carrée
    double carrée = sqrt(puissance);


    // Sin, cos, tan prennent un radian, et renvoient un double
    double sinus = sin(base);
    double cosinus = cos(base);
    double tangente = tan(base);
     // et leur inverses, renvoient un double
    double asinus = asin(base);
    double acosinus = acos(base);
    double atangente = atan(base);
    
    //renvoit l'exponentielle d'un nombre
    double exponentielle = exp(base);

    //Renvoie le logarithme népurien d'un nombre
    double ln = log(exponentielle);

    //Renvoie le logarithme népurien d'un nombre
    double ln10 = log10(exponentielle);


    return 0;
}



int structureComplexes(int chiffre){
    switch (chiffre)
    {
    case 2:
    printf("Deux");
    break;
    case 6:
    printf("Six");
    break;
    default:
    printf("Je n'ai aucune reponse pour ton age");
    break;
    }



    int ternary = (chiffre) ? 1 : 0;



    return 0;
}


// Sortir la suite de fibonacci en base definit par l'input
// jusqu'au deuxieme input

// Sortir les nombres premiers jusqu'a l'input

// Definir si l'input est impair ou paire, faire de meme pour savoir
// si c'est un multiple de 3

// Saisissez 3 input et retournez le plus grand




// Pointeurs 
int maVariable = 10;

printf("Valeur de ma variable: %d ", maVariable);
printf("L'emplacement de ma variable sur mon disque : %p ", &maVariable);

int *monPointeur = NULL;

monPointeur = &maVariable

printf("le pointeur dirige vers l'espace : %p ", monPointeur);
printf("la valeur de l'espace est : %d ", *monPointeur);

// int incre(int nombre){
//     nombre += 1;
//     return nombre;
// }

void incre(int *nombre){
    *nombre += 1;
}

incre(&maVariable);


void enterTheTabloid(){
    int tableau[4];

    tableau[0] = 50;
    tableau[1] = 150;
    tableau[2] = 200;
    tableau[3] = 100;

    for(i=0; i < 4; i++){
        printf("%d \n", tableau[i]);
    }
    return 0;
}

void hello(){
    // char chaine[6] = "Hello";
    char chaine[6];
    chaine[0] = 'h';
    chaine[1] = 'e';
    chaine[2] = 'l';
    chaine[3] = 'l';
    chaine[4] = 'o';
    
    // chaine[5] = '\0';

    printf("%s \n", chaine);


}


void enterTheString(){
    char titre[100];

    printf("Donnes moi le titre de ta prestation" );
    scanf("Titre: %s", &titre );
    printf("Nouveau Titre: %s", titre );
}


// #include <string.h>

int calculLongueur(){
    char chaine[] = "Salut";
    int longueurChaine = 0;
     // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);
    return longueurChaine;
}

 char copyChaine(){
    char chaine[100] = "Youpi", copie[100] = {0};
    //Fait une copie de la chaine
    char* strcpy(char* copie, const char* chaine) 

     return copie;
 }

 void concat(){
    /* On crée 2 chaînes. chaineDebut doit être assez grande pour accueillir
    le contenu de chaineFin en plus, sinon risque de plantage */
    char chaineDebut[] = "Hello ", chaineFin[] = "World";
    // On concatène chaineFin dans chaineDebut
    strcat(chaineDebut, chaineFin);

    printf("%s \n", chaineDebut); // Hello World
    printf("%s \n", chaineFin); // World

 }

void compare(){
    char chaine[] = "Test text", chaine2[] = "Test text";

    if(strcmp(chaine, chaine2) == 0) // Si chaînes identiques
    { 
        printf("Les chaines sont identiques");

    }else {
        printf("Les chaines sont differentes %d " strcmp(chaine, chaine2));
    }
}

void search(){
    char chaine[] = "Test text", *suiteChaine = NULL
    suiteChaine = strchr(chaine , 'e');
    // "est text"
    if(suiteChaine != NULL)// Si on a trouvé quelque chose
    {
        printf("Il y avait bien un e dans la chaine");
    }

}
void searchFor(){
    char chaine[] = "Test text", *suiteChaine = NULL
    // On cherche la première occurrence de e, x ou t dans "Test text" 
    suiteChaine = strpbrk(chaine , "ext");
    // "Test text"
    if(suiteChaine != NULL){
        printf("Il y avait bien un t dans la chaine");
    }

}

void searchForString(){ 
    char *suitChaine;
    // On cherche la première occurrence de "test" dans "Texte de test" :
    suiteChaine = strstr("Text de test", "test");
    if(suiteChaine != NULL){
        printf("Il y avait bien \"test\" dans la chaine");
    }

}

void writeInto( ){
    char chaine[100];
    int taxe =24;
    int prix = 100;
    // On écrit "Cet objet coute 100 €" dans chaine
    sprintf(chaine, "Cet objet coute %d € avec %d pourcents de taxe", prix, taxe);
    // On affiche chaine pour vérifier qu'elle contient bien cela :
    printf("%s", chaine)
}


// faire les fonctions suivantes : 
// strstr
// strlen
// strcpy
// strpbrk


// Creez un programme qui :
// 1 prend pour input "Titre", "Prix /u", "Quantité"
// 2 apres avoir rentré ces informations, le programme vous demande 
// si vous souhaitez continuer
// Si oui : Retournez a l'etape 1
// Si non, le programme affiche l'ensemble des lignes rentrées
// précédement dans un format "tableau"
// ex : "| Mon super titre | 4 €/u | 45 | 180 | ~135€ |"
// plus une ligne de total, affichant la somme des prix susmentionnés
// ex : "|TOTAL| | | 180 € | ~135€|"