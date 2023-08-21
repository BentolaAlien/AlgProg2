#include <stdio.h>

int main()
{
    struct
    {
        int dia;
        int mes;
        int ano;
    } data1, data2;

    printf("Escreva a primeira data datas:");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    printf("Escreva a segunda data datas:");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    // data 1
    if (data1.mes <= 2)
    {
        data1.ano = -1;
    }
    if (data1.mes <= 2)
    {
        data1.mes += 13;
    }
    else
    {
        data1.mes += 1;
    }
    int n1 = ((1461 * data1.ano) / 4) + ((153 * data1.mes) / 5) + data1.dia;

    if (data2.mes <= 2)
    {
        data2.ano = -1;
    }
    if (data2.mes <= 2)
    {
        data2.mes += 13;
    }
    else
    {
        data2.mes += 1;
    }
    int n2 = ((1461 * data2.ano) / 4) + ((153 * data2.mes) / 5) + data2.dia;
    printf("%d dias", n1 - n2);
}