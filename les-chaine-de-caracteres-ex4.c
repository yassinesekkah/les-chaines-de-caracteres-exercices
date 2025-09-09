#include <stdio.h>
#include <string.h>

int main(){

    char name1[100];
    char name2[100];

    printf("Entrez le premier mot : \n");
    fgets(name1, sizeof(name1), stdin);               //fgets pour ignore le problem de espace entre les mots

    printf("Entrez le dexieme mot : \n");
    fgets(name2, sizeof(name2), stdin);

    if (strcmp(name1, name2) == 0){                              //strcmp kadir return 0 ila kano le meme 
        printf("le premier et le dexieme mot sont identiques");
    }
    else{                                                             //strcmp return >0 ou <0 donc != fle cas dyal had exercice
        printf("le premier et le dexieme mot sont differents");
    }

    return 0;
}