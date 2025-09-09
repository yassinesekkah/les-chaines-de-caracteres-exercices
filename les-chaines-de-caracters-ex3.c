#include <stdio.h>
#include <string.h>

int main(){

    char name[100];
    char ville[100];

    printf("Entrez le nom de l'ecole  : ");
    fgets(name, sizeof(name), stdin);               //khdamt b fget bach n ignori l problem dyal espace

    printf("Entrez le ville de l'ecole : ");
    fgets(ville, sizeof(ville), stdin);         //sizeof bach fgets matfoutch l7ad dyal tableau name 

    name[strcspn(name, "\n")] = '\0';              //changina "\n" b '\0' bach n suprimiwha man name webla mayerja3 a la ligne
    ville[strcspn(ville, "\n")] = '\0';

    strcat(name, " ");                      //zadna espace l lchaine (name) 9bal manzido liha chaine ville 

    strcat(name, ville);            //mergina les deux tableaux, khdina la chaine de caracteres li f source(ville) 
                                     //wzadnah lchaine de caracteres (name);
    printf("%s", name);

    return 0;
}