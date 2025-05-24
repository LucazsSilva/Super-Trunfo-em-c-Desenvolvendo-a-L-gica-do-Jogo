#include <stdio.h>

int main(){
    int opcao;
    float n1, n2, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1 - Calcular media\n2 - Determinar Status\n3 - Sair\nEscolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a media\n");
        printf("Informe a primeira nota: ");
        scanf("%f", &n1);
        printf("Calcular a media\n");
        printf("Informe a segunda nota: ");
        scanf("%f", &n2);

        if ((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)){
            media = (n1 + n2) / 2;
            printf("A media e: %.2f\n", media);
        } else {
            printf("dsd\n");
        }
        break;
    case 2:
        printf("Determine o status\n");
        printf("Entre com a media: ");
        scanf("%f", &media);
        media >= 5 ? printf("Aprovado") : printf("Reprovado");
        break;
    case 3:
         printf("Saindo do programa.\n");
        break;
    default:
        printf("Opcao invalida.");
        break;
    }

    return 0;
}