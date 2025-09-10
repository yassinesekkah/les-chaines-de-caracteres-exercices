#include <stdio.h>
#include <string.h>

int main(){
    char chaine[100];
    char SansEspace [100];
    int stock = 0;

    printf("Entrez une chaine avec des espaces : \n");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = '\0';                     //supprimer "\n" man chaine

    for(int i = 0; i<strlen(chaine); i++){                  //boucle bach nestockiw  les caracters apart espace
        if(chaine[i] != ' '){
            SansEspace[stock] = chaine[i];
            stock++;
        }
    }
    SansEspace[stock] = '\0';                        //ajouter '\0' a la fin de la nouvelle chaine

    printf("La chaine sans espaces est : %s \n", SansEspace);

    return 0;
}