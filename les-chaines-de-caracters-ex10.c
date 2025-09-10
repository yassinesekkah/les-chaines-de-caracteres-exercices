#include <stdio.h>
#include <string.h>

int main(){
    char chaine[100];
    char SousChaine[100];

    printf("Entrez une chaine principale : \n");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    printf("Entrez une sous chaine a rechercher : \n");
    fgets(SousChaine, sizeof(SousChaine), stdin);
    SousChaine[strcspn(SousChaine, "\n")] = '\0';

    if(strstr(chaine, SousChaine) != NULL){                                                   //strstr() pour recherche
        printf("la sous chaine '%s' est trouvee dans la chaine principale", SousChaine);
    }
    else{
        printf("la sous chaine '%s' n'est pas trouvee dans la chaine principale", SousChaine);
    }

    return 0;
}