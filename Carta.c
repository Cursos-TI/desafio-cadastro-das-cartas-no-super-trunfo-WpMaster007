#include <stdio.h>
int main(){
    
    char Estado [3];
    char Codigo [4];
    char Cidade [100];
    float Area;
    float PIB;
    int Populacao, Pontos;

    char Estado2 [3];
    char Codigo2 [4];
    char Cidade2 [100];
    float Area2;
    float PIB2;
    int Populacao2, Pontos2;

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

    printf (" \n" );

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
    
    printf("\n");
    
    printf("CARTA 1 \n");
    printf("O Estado é: %s\n", Estado);
    printf("O Codigo é: %s\n", Codigo);
    printf("A Cidade é: %s\n", Cidade);
    printf("A População é: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("O PIB é: %.2f Bilhões de reais\n", PIB);
    printf("Os Pontos Turísticos são: %d\n", Pontos);

    printf("CARTA 2 \n");
    printf("O Estado é: %s\n", Estado2);
    printf("O Codigo é: %s\n", Codigo2);
    printf("A Cidade é: %s\n", Cidade2);
    printf("A População é: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("O PIB é: %.2f Bilhões de reais\n", PIB2);
    printf("Os Pontos Turísticos são: %d\n", Pontos2);

    return 0;
}
