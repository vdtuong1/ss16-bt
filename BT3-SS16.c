#include <stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\nguye\\OneDrive\\Máy tính\\BT3.txt", "w");
    
    int numLines;
    printf("Nhap so dong: ");
    scanf("%d", &numLines);
    while ((getchar()) != '\n');
    for (int i = 1; i <= numLines; ++i) {
        printf("Nhap noi dung dongng %d: ", i);

        char line[100];
        fgets(line, sizeof(line), stdin);

        fprintf(file, "%s", line);
    }

    fclose(file);

    file = fopen("bt3.txt", "r");


    printf("\Noi dung cua file bt3.txt:\n");

    char character;
    while ((character = fgetc(file)) != EOF) {
        putchar(character);
    }

    fclose(file);

    return 0;
}

