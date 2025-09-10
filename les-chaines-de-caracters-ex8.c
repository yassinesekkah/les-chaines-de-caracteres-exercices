#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char str[100];
    int i ;

    printf("Entrez un mot : \n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';       //supprimer le \n
    
  

    for(i=0; i<strlen(str); i++){
        str[i] = tolower(str[i]);         //tolower katchangi mn majiscule to miniscule
    }

    printf("%s", str);

    return 0;
}