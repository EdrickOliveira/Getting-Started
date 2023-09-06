#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
    int y, z, ntipos, ntamanhos;

    scanf("%i %i" &ntipos, &ntamanhos);
    int i[ntipos], j[ntamanhos];

    for(y=0; y<ntipos; y++){
        for(z=0; z<ntamanhos; z++){
            scanf("%i", &x[y[z]]);
        }
    } */

    int i, ntamanhos, npedidos;

    scanf("%i", &ntamanhos);

    int estoquetamanho[ntamanhos];

    for(i=0; i<ntamanhos; i++){
        scanf("%i", estoquetamanho[i]);
    }

    scanf("%i", &npedidos);
    int tamanhopedido[npedidos];

    for(i=0; i<npedidos; i++){
        scanf("%i", &tamanhopedido[i]);
        if(estoquetamanho[tamanhopedido[i]]!=0){
            estoquetamanho[tamanhopedido[i]]--;
        }
    }


    return 0;
}
