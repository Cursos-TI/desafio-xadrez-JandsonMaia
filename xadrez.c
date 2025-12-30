#include <stdio.h>

int main(){
    int i;
    // Quantidade de casas
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_cavalo = 1;

    //Mover a Torre 5 casas para direita
    //Usando For
        printf("Movimento da Torre: \n");

    for (int i = 1; i <= casas_torre; i++)
    {
        printf("Direita\n"); //Imprime a direção do movimento
    }
    
        printf("\n");

    //Mover o Bispo 5 casas para Cima e direita
    //Usando while
        printf("Movimento do Bispo:\n");
        i = 1;

    while (i <= casas_bispo)
    {
        printf("Cima e Direita\n");
        i++;
    }
    
        printf("\n");

    //Mover a Rainha 8 casas para Esquerda
    //Usando Do-While
    printf("Movimento da Rainha: \n");
    i = 1;

    do
    {
    printf("Esquerda\n");
        i++;

    } while (i <= casas_rainha);

    printf("\n");

    //Mover o Cavalo 2 casas para Baixo e 1 para Esquerda
    //Usando while com For aninhados
    printf("Movimento do Cavalo: \n");
    
    while (casas_cavalo--)
    {
        for (int j = 0; j < 2; j++)
            printf("Baixo\n");
        {
            printf("Esquerda\n");
        }
        
    }
    

    return 0;
}
