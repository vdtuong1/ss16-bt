#include <stdio.h>

int main() {
    FILE *file;
    char file_path[] = ("C:\\Users\\nguye\\OneDrive\\Máytính\\bt03.txt");
    char ch;
    int num_lines = 0;

    file = fopen(file_path, "r");

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            num_lines++;
        }
        putchar(ch);
    }

    fclose(file);

    printf("S? d?ng trong file: %d\n", num_lines);

    return 0;
}
