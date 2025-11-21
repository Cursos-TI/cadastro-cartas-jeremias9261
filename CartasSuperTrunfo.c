#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Definição do tamanho máximo para as strings (Nome e Código)
#define MAX_NOME_LEN 50
#define MAX_CODIGO_LEN 4 // Ex: A01 (3 caracteres) + \0 (1 caractere nulo)

int main() {
    // -----------------------------------------------------------------
    // Estrutura de Variáveis
    // -----------------------------------------------------------------

    // Variáveis para a **PRIMEIRA CARTA**
    char estado1;
    char codigo_carta1[MAX_CODIGO_LEN];
    char nome_cidade1[MAX_NOME_LEN];
    int populacao1;
    float area_km2_1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a **SEGUNDA CARTA**
    char estado2;
    char codigo_carta2[MAX_CODIGO_LEN];
    char nome_cidade2[MAX_NOME_LEN];
    int populacao2;
    float area_km2_2;
    float pib2;
    int pontos_turisticos2;

    // -----------------------------------------------------------------
    // Leitura dos Dados da PRIMEIRA CARTA
    // -----------------------------------------------------------------
    printf("===========================================\n");
    printf("      CADASTRO DA PRIMEIRA CARTA (1/2)     \n");
    printf("===========================================\n");

    // Estado (char)
    printf("1. Estado (Letra de 'A' a 'H'): ");
    // O espaco antes do %c eh importante para ignorar caracteres de nova linha/espaco
    scanf(" %c", &estado1); 

    // Código da Carta (string/char[])
    printf("2. Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    // Nome da Cidade (string/char[])
    printf("3. Nome da Cidade: ");
    // Leitura do nome com espacos, limitando o tamanho
    scanf("%s", nome_cidade1); 

    // População (int)
    printf("4. Populacao (Num. de habitantes - int): ");
    scanf("%d", &populacao1);

    // Area (float)
    printf("5. Area (em km2 - float): ");
    scanf("%f", &area_km2_1);

    // PIB (float)
    printf("6. PIB (Produto Interno Bruto - float): ");
    scanf("%f", &pib1);

    // Pontos Turísticos (int)
    printf("7. Numero de Pontos Turisticos (int): ");
    scanf("%d", &pontos_turisticos1);


    // -----------------------------------------------------------------
    // Leitura dos Dados da SEGUNDA CARTA
    // -----------------------------------------------------------------
    printf("\n===========================================\n");
    printf("       CADASTRO DA SEGUNDA CARTA (2/2)     \n");
    printf("===========================================\n");

    // Estado (char)
    printf("1. Estado (Letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    // Código da Carta (string/char[])
    printf("2. Codigo da Carta (Ex: B03): ");
    scanf("%s", codigo_carta2);

    // Nome da Cidade (string/char[])
    printf("3. Nome da Cidade: ");
    scanf("%s", nome_cidade2);

    // População (int)
    printf("4. Populacao (Num. de habitantes - int): ");
    scanf("%d", &populacao2);

    // Area (float)
    printf("5. Area (em km2 - float): ");
    scanf("%f", &area_km2_2);

    // PIB (float)
    printf("6. PIB (Produto Interno Bruto - float): ");
    scanf("%f", &pib2);

    // Pontos Turísticos (int)
    printf("7. Numero de Pontos Turisticos (int): ");
    scanf("%d", &pontos_turisticos2);


    // -----------------------------------------------------------------
    // Exibição dos Dados da PRIMEIRA CARTA
    // -----------------------------------------------------------------
    printf("\n\n===========================================\n");
    printf("        INFORMACOES DAS CARTAS             \n");
    printf("===========================================\n");
    printf("\n--- CARTA 1: %s ---\n", nome_cidade1);
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    // Formato de milhar e inteiro para População
    printf("Populacao: %d\n", populacao1);
    // Formato de duas casas decimais para Area e PIB
    printf("Area (em km2): %.2f\n", area_km2_1); 
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    

    // -----------------------------------------------------------------
    // Exibição dos Dados da SEGUNDA CARTA
    // -----------------------------------------------------------------
    printf("\n--- CARTA 2: %s ---\n", nome_cidade2);
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area (em km2): %.2f\n", area_km2_2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    printf("===========================================\n");

    return 0; // Indica que o programa terminou com sucesso
}
