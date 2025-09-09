#include <stdio.h>
#include <string.h>

int main(){

    char name[100];
    int longueur;
    char temp;

    printf("Entrez un mot : \n");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';           //supprimer le "\n"

    longueur = strlen(name);                     //7sabna longueur bel fonction strlen bach biha nkhadmo fel boucle 

    for(int i = 0; i < longueur/2; i++){       //longueur/2 bach may3awedch yeswapi weyradhom kif kano
        temp = name[i];
        name[i] = name[longueur-1-i];       //swap 
        name[longueur-1-i] = temp;
    }
    printf("le mot inversee %s", name);

    return 0;
}