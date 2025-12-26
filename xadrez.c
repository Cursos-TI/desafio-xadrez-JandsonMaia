#include <stdio.h>

int main(){
    int i;
    // Quantidade de casas
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    //Mover a Torre 5 casas para direita
    //Usando For
        printf("Movimento da Torre: \n");

    for (int i = 1; i <= casas_torre; i++)
    {
        printf("Direita\n"); //Imprime a direção do movimento
    }
    
    //Mover o Bispo 5 casas para Cima e direita
    //Usando while
        printf("Movimento do Bispo:\n");
        i = 1;

    while (i <= casas_bispo)
    {
        printf("Cima e Direita\n");
        i++;
    }
    
    //Mover a Rainha 8 casas para Esquerda
    //Usando Do-While
    printf("Movimento da Rainha: \n");
    i = 1;

    do
    {
    printf("Esquerda\n");
        i++;

    } while (i <= casas_rainha);
    

    return 0;
}
