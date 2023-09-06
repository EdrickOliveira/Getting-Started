#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ia, im, id, ih, is;
    float imt, iat;

    printf("Digite sua idade em anos\n");
    scanf("%i", &ia);
    printf("Digite quantos meses voce tem a mais\n");
    scanf("%i", &im);

    if(im>12){
        printf("\nIdade invalida. Meses aceitos de 0 a 12\n");
        return 0;
    }
    else{}

    imt=im/12;
    iat=imt+ia;
    id=iat*365;
    ih=id*24;
    is=ih*3600;

    printf("\nSua idade em dias e igual a %i\n", id);
    printf("Sua idade em horas e igual a %i\n", ih);
    printf("Sua idade em segundos e igual a %i\n", is);


    return 0;
}
