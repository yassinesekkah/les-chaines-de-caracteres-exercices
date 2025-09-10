#include <stdio.h>
#include <string.h>

int main()
{
    char chaine[100];
    char RechercheCaracter;
    int compteur = 0;

    printf("Entrez un mot : \n");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = '\0';

    printf("Entrez le caracter de recherche \n");
    scanf(" %c", &RechercheCaracter);

    for (int i = 0; i < strlen(chaine); i++)
    {
        if (chaine[i] == RechercheCaracter)
        {
            compteur++;
        }
    }
    printf("le caracter %c est %d dans cette paragraphe", RechercheCaracter, compteur);

    return 0;
}