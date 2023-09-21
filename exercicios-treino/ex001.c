#include <stdio.h>

int main (void){
    FILE *file;

    file = fopen ("ex001.txt", "w");
    fprintf(file, "Testando");
    fclose(file);

    return 0;
}
