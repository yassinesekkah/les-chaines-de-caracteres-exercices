#include <stdio.h>
#include <string.h>

int main (){
    char str[100];
    int longueur = 0;
    int i = 0;
    printf("Entrez un mot : \n");
    scanf("%s", str);

    while(str[i] != '\0'){
        longueur++;
        i++;
    }
    printf("la longueur d'une ce mot est : %d", longueur);
    return 0;
}