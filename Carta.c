#include <stdio.h>

int main(){
    
    char Estado [3];
    char Codigo [4];
    char Cidade [100];
    float Area;
    float PIB;
    int Populacao, Pontos;

    printf ("Carta 2 \n" );
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

    printf("O Estado é: %s\n", Estado);
    printf("O Codigo é: %s\n", Codigo);
    printf("A Cidade é: %s\n", Cidade);
    printf("A População é: %d\n", Populacao);
    printf("A Área é: %.4f km²\n", Area);
    printf("O PIB é: %.4f Bilhões de reais\n", PIB);
    printf("Os Pontos Turísticos são: %d\n", Pontos);

    char Estado [3];
    char Codigo [4];
    char Cidade [100];
    float Area;
    float PIB;
    int Populacao, Pontos;

    printf ("Carta 2 \n" );
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

    printf("O Estado é: %s\n", Estado);
    printf("O Codigo é: %s\n", Codigo);
    printf("A Cidade é: %s\n", Cidade);
    printf("A População é: %d\n", Populacao);
    printf("A Área é: %.4f km²\n", Area);
    printf("O PIB é: %.4f Bilhões de reais\n", PIB);
    printf("Os Pontos Turísticos são: %d\n", Pontos);

    return 0;
}