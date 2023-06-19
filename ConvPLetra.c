#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char palabra[MAX_LENGTH];

    printf("Ingrese una palabra en mayúscula: ");
    scanf("%s", palabra);

    int longitud = strlen(palabra);
    int indicePenultima = longitud - 2;

    if (indicePenultima >= 0 && indicePenultima < longitud) {
        char penultimaLetra = palabra[indicePenultima];

        if (isupper(penultimaLetra)) {
            penultimaLetra = tolower(penultimaLetra);
        } else {
            penultimaLetra = toupper(penultimaLetra);
        }

        palabra[indicePenultima] = penultimaLetra;

        printf("Palabra modificada: %s\n", palabra);
    } else {
        printf("La palabra no tiene penúltima letra.\n");
    }

    return 0;
}