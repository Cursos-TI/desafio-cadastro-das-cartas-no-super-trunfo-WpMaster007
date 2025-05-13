#include <stdio.h>
int main(){
    
    // Declaração de variáveis da Carta 1
    char Estado [3];
    char Codigo [4];
    char Cidade [100];
    float Area;
    float PIB;
    int Populacao, Pontos;
    float Densidade;
    float PIBPERCAPTA;
    float somaPoder1, somaPoder2; // Variaveis para calcular os "poderes" das carta 1 e 2

    // Declaração de variáveis da Carta 2
    char Estado2 [3];
    char Codigo2 [4];
    char Cidade2 [100];
    float Area2;
    float PIB2;
    int Populacao2, Pontos2;
    float Densidade2;
    float PIBPERCAPTA2;
    

     // Entrada de dados da Carta 1
    printf ("Carta 1 \n" );
    printf("Digite o Estado: ");
    scanf("%s", Estado);
    
    printf("Digite o Codigo: ");
    scanf("%s", Codigo);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", Cidade);
    
    printf("Digite a População: ");
    scanf("%d", &Populacao);
    
    printf("Digite a Área: ");
    scanf("%f", &Area);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &Pontos);

     // Cálculos
    Densidade = Populacao / Area;
    PIBPERCAPTA = (PIB * 1000000000) / (float)Populacao;

    Densidade2 = Populacao2 / Area2;
    PIBPERCAPTA2 = (PIB2 * 1000000000) / (float)Populacao2;

    somaPoder1 = ((float)Populacao + Area + PIB + Pontos + PIBPERCAPTA) + (1 / Densidade);
    somaPoder2 = ((float)Populacao2 + Area2 + PIB2 + Pontos2 + PIBPERCAPTA2) + (1 / Densidade2);

    printf (" \n" );


     // Entrada de dados da Carta 2
    printf ("Carta 2 \n" );
    printf("Digite o Estado: ");
    scanf("%s", Estado2);
    
    printf("Digite o Codigo: ");
    scanf("%s", Codigo2);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", Cidade2);
    
    printf("Digite a População: ");
    scanf("%d", &Populacao2);
    
    printf("Digite a Área: ");
    scanf("%f", &Area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &Pontos2);

    Densidade2 = (float) Populacao2 / Area2;
    PIBPERCAPTA2 = (float) PIB2 / Populacao2;
    PIBPERCAPTA2 = (PIB2 * 1000000000) / Populacao2;

    
    // pular linha dos dados da carta 01 para carta 02.
    printf("\n"); 
    
    // Exibição dos dados da Carta 1
    printf("CARTA 1 \n");
    printf("O Estado é: %s\n", Estado);
    printf("O Codigo é: %s\n", Codigo);
    printf("A Cidade é: %s\n", Cidade);
    printf("A População é: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("O PIB é: %.2f Bilhões de reais\n", PIB);
    printf("Os Pontos Turísticos são: %d\n", Pontos);
    printf("A Densidade Populacional é: %.2f hab/km²\n", Densidade);
    printf("PIB per Capita é: %.2f reais\n", PIBPERCAPTA);

    // pular linha dos dados da carta 01 para carta 02.
    printf("\n"); 

    // Exibição dos dados da Carta 2
    printf("CARTA 2 \n");
    printf("O Estado é: %s\n", Estado2);
    printf("O Codigo é: %s\n", Codigo2);
    printf("A Cidade é: %s\n", Cidade2);
    printf("A População é: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("O PIB é: %.2f Bilhões de reais\n", PIB2);
    printf("Os Pontos Turísticos são: %d\n", Pontos2);
    printf("A Densidade Populacional é: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita é: %.2f reais\n", PIBPERCAPTA2);

     // Exibir comparações
    printf("\nComparação de Cartas:\n");

    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n",
           (Populacao > Populacao2) * 1 + (Populacao2 >= Populacao) * 2,
           Populacao > Populacao2);

    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n",
           (Area > Area2) * 1 + (Area2 >= Area) * 2,
           Area > Area2);

    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n",
           (PIB > PIB2) * 1 + (PIB2 >= PIB) * 2,
           PIB > PIB2);

    // Pontos Turísticos (maior vence) - CORRIGIDO
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (Pontos > Pontos2) * 1 + (Pontos2 >= Pontos) * 2,
           Pontos > Pontos2);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (Densidade < Densidade2) * 1 + (Densidade > Densidade2) * 2,
           Densidade < Densidade2);

    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (PIBPERCAPTA > PIBPERCAPTA2) * 1 + (PIBPERCAPTA2 >= PIBPERCAPTA) * 2,
           PIBPERCAPTA > PIBPERCAPTA2);

    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n",
           (somaPoder1 > somaPoder2) * 1 + (somaPoder2 >= somaPoder1) * 2,
           somaPoder1 > somaPoder2);

    return 0; // Indica que o programa foi executado com sucesso, sem erros
}
