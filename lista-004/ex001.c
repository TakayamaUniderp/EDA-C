    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    int main (){
        int qtd, i;
        FILE *file;

        printf("QUANTOS NUMEROS SERAO IMPRESSOS? ");
        scanf("%d", &qtd);

        file = fopen ("ex001.txt", "w"); // abrindo o arquivo de texto

        fprintf(file, "%d\n", qtd);
        printf("%d\n", qtd); // imprimindo no console pra checar se funcionou

        srand(time(NULL)); // gerando a semente
        for (i = 0; i < qtd; i++){ //laço pra limitar a quantidade de iterações
            fprintf(file, "%d\n", rand()%100);
        }



        return 0;
    }
