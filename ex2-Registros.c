#include <stdio.h>

int main()
{
    struct
    {
        int hh;
        int mm;
        int ss;
    } h1, h2, hf;
    printf("Digite o primeiro horario: ");
    scanf("%d:%d:%d\n", &h1.hh, &h1.mm, &h1.ss);
    scanf("%d:%d:%d", &h2.hh, &h2.mm, &h2.ss);

    // transformar tudo em segundos

    if (h1.hh < h2.hh)
    {
        hf.hh = h2.hh - h1.hh;
    }
    else if (h1.hh > h2.hh)
    {
        hf.hh = h1.hh - h2.hh;
        hf.hh = 24 - hf.hh;
    }
    else
    {
        hf.hh = 0;
    }

    if (h1.mm < h2.mm)
    {
        hf.mm = h2.mm - h1.mm;
    }
    else if (h1.mm > h2.mm)
    {
        hf.mm = h1.mm - h2.mm;
        hf.mm = 60 - hf.mm;
        hf.hh--;
    }
    else
    {
        hf.mm = 0;
    }

    if (h1.ss < h2.ss)
    {
        hf.ss = h2.ss - h1.ss;
    }
    else if (h1.ss > h2.ss)
    {
        hf.ss = h1.ss - h2.ss;
        hf.ss = 60 - hf.ss;
        hf.mm--;
    }
    else
    {
        hf.ss = 0;
    }

    printf("\n%02d:%02d:%02d", hf.hh, hf.mm, hf.ss);
}