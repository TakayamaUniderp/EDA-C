    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    //Faça um programa que lê o arquivo criado acima para um vetor de inteiros. A
    //seguir, exiba o menor elemento e a média dos elementos desse vetor. Use funções
    //para calcular esses valores.


    //CHECAGEM DO MENOR
    void calcularMenor(int dados[], int tam){
        int menor = dados[0];

        for (int i=0; i < tam; i++){
            if (dados[i] < menor){
                menor = dados[i];
            }
        }
        printf("MENOR: %d\n", menor);

        return 0;
    }

    //CÁLCULO DA MÉDIA
    void calcularMedia(int dados[],int tam){
        int media;
        for(int i=0; i < tam; i++){
            media = media + dados[i];
        }
        printf("MEDIA: %d\n", media / tam);
        return 0;
    }

    int main (){
        int tam;
        FILE *file;

        file = fopen("ex001.txt", "r");
        fscanf(file, "%d", &tam);

        printf("%d\n", tam);

        int dados[tam];

        for (int i=0; i < tam; i++){
            fscanf(file, "%d", &dados[i]);
        }

        calcularMenor(dados, tam);
        calcularMedia(dados, tam);

        return 0;
    }


