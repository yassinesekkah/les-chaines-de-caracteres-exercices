#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char str[100];
    int i ;
    int longueur;

    printf("Entrez un mot : \n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';       //supprimer le \n
    
    longueur = strlen(str);               //hsabna longureur bach nkhdam bih fel boucle

    for(i=0; i<longueur; i++){
        str[i] = toupper(str[i]);         //toupper katchangi mn miniscule lel majiscule
    }

    printf("%s", str);

    return 0;
}