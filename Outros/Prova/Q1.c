/*
Lucas Formentão Rodrigues - PRG22003
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, i=0, quant_maior = 0, idade;
    float sal_total = 0, media;
    char sexo;
    printf("Digite o número de pessoas entrevistadas:");
    scanf("%d", &num);
    float sal[num];
    while (i<num)
    {
        printf("\nSexo(M ou F):");
        scanf("\n%c", &sexo);
        if (sexo == 'M')
        {
            printf("\nDigite o salário do entrevistado:");
            scanf("%f", &sal[i]);
            sal_total = sal_total + sal[i];
            printf("\nDigite a idade do entrevistado:");
            scanf("%d", &idade);
            if(idade>30)
            quant_maior++;
        }
        else
        {
            printf("\nDigite o salário da entrevistada:");
            scanf("%f", &sal[i]);
            sal_total = sal_total + sal[i];
            printf("\nDigite a idade da entrevistada:");
            scanf("%d", &idade);
        }
        i++;
    }
    media = sal_total / num;
    printf("A média salarial é de: %.2f", media);
    printf("\nHá %d homens com mais de 30 anos", quant_maior);
    return 0;
}