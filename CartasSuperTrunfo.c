#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.

typedef struct {
    char estado;           // Estado da cidade
    char codigo[4];       // Código da carta (ex: A01)
    char nome[50];        // Nome da cidade
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade
    int pontos_turisticos; // Número de pontos turísticos
} Cidade;

void cadastrarCidade(Cidade *cidade) {
    printf("Digite o estado (A-H): ");
    scanf(" %c", &cidade->estado);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cidade->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade->nome);
    
    printf("Digite a população: ");
    scanf("%d", &cidade->populacao);
    
    printf("Digite a área em km²: ");
    scanf("%f", &cidade->area);
    
    printf("Digite o PIB: ");
    scanf("%f", &cidade->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

void compararCidades(Cidade *cidadeA, Cidade *cidadeB) {
    printf("\nComparando %s e %s:\n", cidadeA->nome, cidadeB->nome);

    if (cidadeA->populacao > cidadeB->populacao) {
        printf("%s tem maior população.\n", cidadeA->nome);
    } else {
        printf("%s tem maior população.\n", cidadeB->nome);
    }

    if (cidadeA->area > cidadeB->area) {
        printf("%s tem maior área.\n", cidadeA->nome);
    } else {
        printf("%s tem maior área.\n", cidadeB->nome);
    }

    if (cidadeA->pib > cidadeB->pib) {
        printf("%s tem maior PIB.\n", cidadeA->nome);
    } else {
        printf("%s tem maior PIB.\n", cidadeB->nome);
    }

    if (cidadeA->pontos_turisticos > cidadeB->pontos_turisticos) {
        printf("%s tem mais pontos turísticos.\n", cidadeA->nome);
    } else {
        printf("%s tem mais pontos turísticos.\n", cidadeB->nome);
    }
}

int main() {
Cidade cidade1, cidade2;

    printf("Cadastro da Cidade 1:\n");
    cadastrarCidade(&cidade1);

    printf("Cadastro da Cidade 2:\n");
    cadastrarCidade(&cidade2);

    // Comparação de Cartas
    compararCidades(&cidade1, &cidade2);

    // Exibição dos Resultados
    printf("Comparações concluídas.\n");
return 0;
}
