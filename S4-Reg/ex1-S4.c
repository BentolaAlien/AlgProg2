#include <stdio.h>
int main()
{
	struct
	{
		int dia;
		int mes;
		int ano;
	} data, prox;

	printf("digite uma data (dd/mm/aaaa): ");
	scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
	prox = data;
	prox.dia += 1;
	// mes com dias 31
	if (prox.dia > 31)
	{
		if (prox.mes == 1 || prox.mes == 3 || prox.mes == 5 || prox.mes == 7 || prox.mes == 8 || prox.mes == 9 || prox.mes == 12)
		{
			if (prox.mes == 12)
			{
				prox.mes = 1;
				prox.ano += 1;
			}
			else
			{
				prox.mes += 1;
			}
			prox.dia = 1;
		}
	}
	else if (prox.dia == 31)
	{
		if (prox.mes == 4 || prox.mes == 6 || prox.mes == 9 || prox.mes == 12)
		{
			prox.dia = 1;
			prox.mes += 1;
		}
	}
	else if (prox.mes == 2)
	{
		if (prox.ano % 400 == 0 || prox.ano % 4 == 0 && prox.ano % 100 != 0)
		{
			if (prox.dia == 30)
			{
				prox.dia = 1;
				prox.mes += 1;
			}
		}
		else
		{
			if (prox.dia == 29)
			{
				prox.dia = 1;
				prox.mes += 1;
			}
		}
	}
	printf("%02d/%02d/%04d", prox.dia, prox.mes, prox.ano);
}