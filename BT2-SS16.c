#include <stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\nguye\\OneDrive\\M�y t�nh\\Bt01.txt", "r");
    char character;
    while ((character = fgetc(file)) != EOF) {
        putchar(character);
    }
    fclose(file);

    return 0;
}

