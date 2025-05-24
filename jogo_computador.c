#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("M - Maior\nN - Menor\nI - Igual\n");
    printf("Comparacao: ");
    scanf("%c", &tipoComparacao);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;    
    case 'I':
    case 'i':
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
        printf("Opcao de jogo invalida.");
        break;
    }

    if (resultado == 1){
        printf("O jogador ganhou: %d\n", numeroJogador);
    } else {
        printf("A maquina ganhou: %d", numeroComputador);
    }



}