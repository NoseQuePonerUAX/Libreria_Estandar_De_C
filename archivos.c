#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se logra abrir.\n");
        return 1;
    }
    fclose(file);
    return 0;
}
