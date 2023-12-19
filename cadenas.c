#include <string.h>
#include <stdio.h>

int main() {

    char str1[] = "Pelota";
    char str2[] = "Bellota";
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("Las cadenas son iguales\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    char str[] = "Que pasa amigos del bien";
    int length = strlen(str);
    printf("La longitud de '%s' es: %d\n", str, length);
    return 0;
}
