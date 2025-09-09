#include <stdio.h>
#include <string.h>

int main(){

    char name[50];

    printf("Entrez un mot : \n");
    fgets(name, sizeof(name), stdin);

    printf("%s", name);

    return 0;
}