#include <stdio.h>

//Movimentação da Torre
void recursivoTorre(int casas_torre){
    if (casas_torre > 0){
        printf("Direita \n");
        recursivoTorre(casas_torre - 1);
    }
}

//Movimentação do Bispo
void recursivoBispo(int casas_bispo){
    if (casas_bispo <= 0)
    return;

        for(int i = 0; i < 1; i++){
            printf("Cima\n");
        }
            for (int j = 0; j < 1; j++){
                printf("Direita\n");        
    }
   recursivoBispo(casas_bispo -1);
}

//Movimentação da Rainha
void recursivoRainha(int casas_rainha){
    if (casas_rainha > 0){
        printf("Esquerda \n");
        recursivoRainha(casas_rainha - 1);
    }
}

int main(){

    //Mover a Torre 5 casas para direita
    //Usando a Recursividade

    int quantidadeTorre = 5;

    printf("Movimento da Torre: \n");
    recursivoTorre(quantidadeTorre);

    printf("\n");

    //Mover o Bispo 5 casas para Cima e direita
    //Usando a Recursividade com Loops Aninhados

    int quantidadeBispo = 5;

    printf("Movimento do Bispo: \n");
    recursivoBispo(quantidadeBispo);

    printf("\n");

    //Mover a Rainha 8 casas para Esquerda
    //Usando a Recursividade

    int quantidadeRainha = 8;

    printf("Movimento da Rainha: \n");
    recursivoRainha(quantidadeRainha);
    
    printf("\n");


    //Mover o Cavalo 2 casas para Cima e 1 para Direita
    //Usando loops aninhados
   printf("Movimento do Cavalo:\n");

for (int casas_cavalo = 1; casas_cavalo <= 3; casas_cavalo++) {

    if (casas_cavalo <= 2) {
        printf("Cima\n");
        continue; 
    }

    if (casas_cavalo == 3) {
        printf("Direita\n");
        break;
    }
    
}

    return 0;
}
