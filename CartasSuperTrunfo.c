#include <stdio.h>

int main (){
    char estado;   
    char código[4];    
    char cidade[50];
    int populacao;
    float área;
    float pib;
    int pontos_turisticos;
    
    printf("Digite o estado: ");
    scanf(" %c", &estado);
    printf("Digite o código da cidade: ");
    scanf(" %c", &código);
    printf("Digite a população: ");
    scanf(" %d", &populacao);
    printf("Digite a área: ");
    scanf(" %f", &área);
    printf("Digite o pib: ");
    scanf(" %f", &pib);
    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);
 
    printf("Estado: %c", estado);
    printf("Código: %c", código);
    printf("População: %d", populacao);
    printf("Área: %f", área);
    printf("Pib: %f", pib); 
    printf("Pontos Turisticos: %d", pontos_turisticos);

return 0;
}
