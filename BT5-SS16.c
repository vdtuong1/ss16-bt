#include <stdio.h>
int main() {
    FILE *file1, *file3, *file5;
    char file1_path[] = "bt01.txt";
    char file3_path[] = "bt03.txt";
    char file5_path[] = "bt05.txt";
    char ch;

    file1 = fopen(file1_path, "r");
    
    file3 = fopen(file3_path, "r");

    file5 = fopen(file5_path, "w");

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file5);
    }

    while ((ch = fgetc(file3)) != EOF) {
        fputc(ch, file5);
    }

    fclose(file1);
    fclose(file3);
    fclose(file5);

    printf("Noi dung duoc sao chép tu %s và %s sang %s.\n", file1_path, file3_path, file5_path);

    return 0;
}

