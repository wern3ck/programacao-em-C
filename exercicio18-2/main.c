#include <stdio.h>
#include <stdlib.h>

int main()
{
    float retirada1, retirada2, retirada3;
    float salario,saldo_inicial,saldo_parcial, saldo_final;

    printf("saldo inicial: ");
    scanf("%f",&saldo_inicial);

    printf("salario: ");
    scanf("%f",&salario);

    saldo_parcial = saldo_inicial + salario;

    printf("saldo parcial: %.2f\n",saldo_parcial);

    printf("primeira retirada: ");
    scanf("%f",&retirada1);

    saldo_parcial = saldo_parcial - retirada1;

    printf("saldo parcial apos a primeira retirada: %.2f\n", saldo_parcial);

    printf("segunda retira: ");
    scanf("%f",&retirada2);

    saldo_parcial = saldo_parcial - retirada2;

    printf("saldo parcial apos a segunda retirada: %.2f\n",saldo_parcial);

    printf("terceira retirada: ");
    scanf("%f",&retirada3);

    saldo_parcial = saldo_parcial - retirada3;

    printf("saldo final: %.2f",saldo_parcial);

    return 0;
}
