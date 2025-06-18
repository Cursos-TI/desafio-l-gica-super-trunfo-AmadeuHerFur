#include <stdio.h>
inicio do teste
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

//O primeiro bloco do código se refere ao Desafio Iniciante
//Será utilizada a estrutura inicial do primeiro desafio

int main() {
    
   \\Primeira Carta
    
   printf("Informações referentes ao estado A\n");
   printf("Informe o Código para a primeira carta:\n");
   scanf("%s" , &codigo1); 
   printf("Informe uma cidade para esta Carta\n");
   scanf("%s" , &cidade1);
   printf("Informe o valor para a População\n");
   scanf("%d" , &populacao1);
   printf("Informe o valor para a Área\n");
   scanf("%f" , &area1);
   printf("Informe o valor para o PIB\n");
   scanf("%f" , &pib1);
   printf("Informe o valor para o Número de Pontos Turísticos1\n");
   scanf ("%d" , &ponto1);
   
   float densidade1 = (float) populacao1 / area1;
   float capita1 = (float) pib1 / populacao1;
   float poder1 = (float) 1/densidade1 + populacao1 + area1+ pib1 + ponto1 + capita1 
    
   \\Segunda Carta 
    
   printf("Informações referentes ao estado B\n");
   printf("Informe o Código a segunda carta:\n");
   scanf("%s" , &codigo2);
   printf("Informe uma cidade para esta Carta\n");
   scanf(%s , &cidade2);
   printf("Informe o valor para a População\n");
   scanf(%d , &populacao2);
   printf("Informe o valor para a Área\n");
   scanf(%f , &area2);
   printf("Informe o valor para o PIB\n");
   scanf(%f , &pib2);
   printf("Informe o valor para o Número de Pontos Turísticos1\n");
   scanf (%d , &ponto2);

   float densidade2 = (float) populacao2 / area2;
   float capita2 = (float) pib2 / populacao2;
   float poder2 = (float) 1/densidade2 + populacao2 + area2+ pib2 + ponto2 + capita2 

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
