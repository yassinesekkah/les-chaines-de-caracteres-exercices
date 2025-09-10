#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char str[100];
    int i = 0;

    printf("Entrez un mot : \n");
    fgets(str, sizeof(str), stdin)

    while(str[i] != '\0'){
        longueur++;
        i++;
    }
    printf("la longueur d'une ce mot est : %d", longueur);
    return 0;
}