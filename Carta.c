#include <stdio.h>
int main(){
    printf ("Carta 1");
    char Estado [1];
    char Codigo [4];
    char Cidade [40];
    int Populacao, Pontos;
    float Area;
    float PIB;

    printf("Digite o Estado: ");
    scanf("%s", Estado);
    printf("O Estado é: %s\n", Estado);

    printf("Digite o Codigo: ");
    scanf("%s", Codigo);
    printf("O Codigo é: %s\n", Codigo);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade);
    printf("A Cidade é: %s\n", Cidade);

    printf("Digite a População: ");
    scanf("%d", &Populacao);
    printf("A População é: %d\n", Populacao);

    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &Pontos);
    printf("Os Pontos Turísticos são: %d\n", Pontos);

    printf("Digite a Área: ");
    scanf("%f", &Area);
    printf("A Área é: %f\n", Pontos);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("O PIB é: %f\n", PIB);
    
    printf("");
}
