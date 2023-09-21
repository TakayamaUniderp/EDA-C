#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE *filew, *filer;

    filew = fopen ("ex002.txt", "w");
    fprintf(filew, "10 20 30");
    fclose(filew);

    filer = fopen ("ex002.txt", "r");
    int x, y, z;
    fscanf(filer, "%d %d %d", &x, &y, &z);

    printf("%d %d %d", x, y, z);
    fclose(filer);


    return 0;
}
