

#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void lerDadosCarta(Carta *carta) {
    printf("Digite o estado: ");
    scanf("%s", carta->estado);
    printf("Digite o código: ");
    scanf("%s", carta->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &carta->populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta->area);
    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirDadosCarta(Carta carta) {
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da Carta 1:\n");
    lerDadosCarta(&carta1);

    printf("\nDigite os dados da Carta 2:\n");
    lerDadosCarta(&carta2);

    printf("\n--- Dados da Carta 1 ---\n");
    exibirDadosCarta(carta1);

    printf("\n--- Dados da Carta 2 ---\n");
    exibirDadosCarta(carta2);

    return 0;
}





