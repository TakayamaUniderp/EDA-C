//Fa�a um programa que receba do usu�rio um arquivo texto e um caractere. Mostre
//na tela quantas vezes aquele caractere ocorre dentro do arquivo.

#include <stdio.h>

int main() {
    char string[500];
    char caractere;
    int i, contador = 0;

    printf("Digite um texto de at� 500 caracteres): ");
    fgets(string, 500, stdin);

    printf("Digite o caractere para cont�-lo: ");
    scanf(" %c", &caractere);

    for(i = 0; i < 500 && string[i] != '\0'; i++){
        if(string[i] == caractere){
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}



/* EU TINHA FEITO ASSIM, MAS POR ALGUM MOTIVO, TAVA CONTANDO ERRADO, AI EU PESQUISEI E VI NUM SITE PRA USAR O '\O', a� funcionou.

#include <stdio.h>

int main(){
    char string [500];
    char caractere;
    int contador = 0;

    printf("DIGITE UM TEXTO DE AT� 500 CARACTERES!");
    fgets(string, 500, stdin); // string = nome do vetor ---- 500 = o tamanho do vetor ---- stdin indica que a informa��o vem do teclado.

    printf("DIGITE O CARACTERE PARA SER CONTADO! ");
    scanf("%c", &caractere);

    for (int i = 0; i < 500; i++){
        if(string [i] == caractere){
            contador = contador + 1;
        }
    }
    printf("%d", contador);



    return 0;
}*/

