#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "numbers.txt";
    char data[200];

    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter numbers separated by spaces:\n");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);
    fclose(fp);

    printf("numbers.txt created successfully!\n");
    return 0;
}
