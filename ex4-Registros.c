#include <stdio.h>

int main()
{
    struct
    {
        int dia;
        int mes;
        int ano;
    } data;

    printf("Insira uma data: ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
    if (data.mes <= 2)
    {
        data.ano -= 1;
    }

    if (data.mes <= 2)
    {
        data.mes += 13;
    }
    else
    {
        data.mes += 1;
    }

    int n = ((1461 * data.ano) / 4) + ((153 * data.mes) / 5) + 21;
    int D = (n - 621049) % 7;

    if (D == 0)
    {
        printf("Segunda");
    }
    else if (D == 1)
    {
        printf("Terça");
    }
    else if (D == 2)
    {
        printf("Quarta");
    }
    else if (D == 3)
    {
        printf("Quinta");
    }
    else if (D == 4)
    {
        printf("Sexta");
    }
    else if (D == 5)
    {
        printf("Sabado");
    }
    else if (D == 6)
    {
        printf("Domingo");
    }
}