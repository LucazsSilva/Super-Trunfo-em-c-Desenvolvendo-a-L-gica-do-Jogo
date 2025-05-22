#include <stdio.h>

 //Desafio Super Trunfo - Países

int main()
{

    //Carta1
    //Definicão das variaveis so sistema: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[20];
    char codigo_cidade1[20];
    char nome_cidade1[20];
    int populacao1;
    float area_km1;
    float pib1;
    int numero_ponto_turistico1;
    float densidade_populacional1;
    float pib_per_capita1;

    //Variaveis Carta2
    char estado2[20];
    char codigo_cidade2[20];
    char nome_cidade2[20];
    int populacao2;
    float area_km2;
    float pib2;
    int numero_ponto_turistico2;
    float densidade_populacional2;
    float pib_per_capita2;

    int escolhaComparacao;

   // Recebendo a entrada do usuarios com as informacoes de cada estado.
    printf("Informe o nome do estado: \n");
    scanf("%s", estado1);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", codigo_cidade1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Informe o numero da populacao: \n");
    scanf("%d", &populacao1);
    printf("Informe o a area em km quadrado: \n");
    scanf("%f", &area_km1);
    printf("Informe o pib do estado: \n");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turisticos do estado: \n");
    scanf("%d", &numero_ponto_turistico1);

    printf("++++++++ ==================== ++++++++\n");

    //Exibindo os dados informados pelo usuarios
    printf("Nome do estado: %s\n", estado1);
    printf("Codigo da cidade: %s\n", codigo_cidade1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Numero da populacao: %d\n", populacao1);
    printf("Area em km: %.2f\n", area_km1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numero_ponto_turistico1);

    printf("++++++++ ==================== ++++++++\n");

    //Calcular a Densidade Populacional:
    densidade_populacional1 = populacao1 / area_km1;
    //Calcular o PIB per Capita
    pib_per_capita1 = pib1 / populacao1;

    printf("Densidade Populacional Carta1: %.2f\n", densidade_populacional1);
    printf("PIB per Capita Carta1: %.2f\n", pib_per_capita1);

    printf("++++++++ ==================== ++++++++\n");

    //Super poder carta1

    // float super_poder1 = (float)populacao1 + area_km1 + (float)pib1 + (float)numero_ponto_turistico1 + (float)pib_per_capita1 + (1.0f / densidade_populacional1);

    //Carta2

    printf("Informe o nome do estado: \n");
    scanf("%s", estado2);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", codigo_cidade2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Informe o numero da populacao: \n");
    scanf("%d", &populacao2);
    printf("Informe o a area em km quadrado: \n");
    scanf("%f", &area_km2);
    printf("Informe o pib do estado: \n");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos do estado: \n");
    scanf("%d", &numero_ponto_turistico2);

    printf("++++++++ ==================== ++++++++\n");

//    Exibindo os dados informados pelo usuarios
    printf("Nome do estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", codigo_cidade2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Numero da populacao: %d\n", populacao2);
    printf("Area em km: %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numero_ponto_turistico2);

    printf("++++++++ ==================== ++++++++\n");

    //Calcular a Densidade Populacional - carta 2:
    densidade_populacional2 = populacao2 / area_km2;
   // Calcular o PIB per Capita
    pib_per_capita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("++++++++ ==================== ++++++++\n");

    // Super poder carta 2
    // float super_poder1 = (float)populacao1 + area_km1 + (float)pib1 + (float)numero_ponto_turistico1 + (float)pib_per_capita1 + (1.0f / densidade_populacional1);
   // Comparacao de atributo - 
    printf("\n=== Comparação de Cartas ===\n");


    printf("Qual atributo voce deseja comparar?\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade demográfica: ");
    scanf("%d", &escolhaComparacao);
    printf("++++++++ ==================== ++++++++\n");

    switch (escolhaComparacao)
    {
    case 1:
        if (populacao1 > populacao2 ) {
            printf("A Carta 1 (%s) - Venceu com a população: %d\n",estado1, populacao1);
        } else if (populacao1 < populacao2 ){
            printf("A Carta 2 (%s) - Venceu com a população: %d\n",estado1,populacao2);
        } else {
            printf("Houve um empate!\n");
        }
        break;
    case 2:
        if (area_km1 > area_km2){
            printf("A Carta 1 (%s) - Venceu com a area: %.2f\n",estado1,area_km1);
        } else if (area_km1 < area_km2){
            printf("A Carta 2 (%s) - Venceu com a area: %.2f\n",estado1,area_km2);
        } else {
            printf("Houve um empate!\n");
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("A Carta 1 (%s) - Venceu com o pib: %.2f\n",estado1, pib1);
        } else if (pib1 < pib2){
            printf("A Carta 2 (%s) - Venceu com o pib: %.2f\n",estado2, pib2);
        } else {
            printf("Houve um empate!\n");
        }
        break;
    case 4:
        if (numero_ponto_turistico1 > numero_ponto_turistico2){
            printf("A Carta 1 (%s) - Venceu com o número de pontos turísticos: %d\n",estado1, numero_ponto_turistico1);
        } else if (numero_ponto_turistico1 < numero_ponto_turistico2) {
            printf("A Carta 2 (%s) - Venceu com o número de pontos turísticos: %d\n",estado1, numero_ponto_turistico2);
        } else {
            printf("Houve um empate!\n");
        }        
        break;

    case 5:
        if (densidade_populacional1 < densidade_populacional2){
            printf("A Carta 1 (%s) - Venceu com a menor densidade populacional: %.2f\n",estado1, densidade_populacional1);
        } else if (densidade_populacional2 < densidade_populacional1){
            printf("A Carta 2 (%s) - Venceu com a menor densidade populacional: %.2f\n",estado1, densidade_populacional2);
        } else {
            printf("Houve um empate!\n");
        }         
        break;        
        
    default:
        printf("Opcao invalida.");
        break;
    }
    printf("++++++++ ==================== ++++++++\n");


    return 0;
}
