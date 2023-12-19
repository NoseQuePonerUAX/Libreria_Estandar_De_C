#include <stdio.h>

int main() {

    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se logra abrir.\n");
        return 1;
    }

    fclose(file);

    FILE *file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("El archivo no se logra abrir para escritura.\n");
        return 1;
    }
    char buffer[50];
    fscanf(file2, "%s", buffer);
    printf("Leido del archivo: %s\n", buffer);

    fclose(file2);

    return 0;
}
