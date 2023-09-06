#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipos, tamanhos, pedidos, l, c, i, tamanhopedido, tipopedido;
    scanf("%i %i", &tipos, &tamanhos);

    int estoque[tipos][tamanhos], vendas=0;

    for(l=0; l<tipos; l++){
        for(c=0; c<tamanhos; c++){
            scanf("%i", &estoque[l][c]);
        }
    }
    scanf("%i", &pedidos);
    for(i=0; i<pedidos; i++){
        scanf("%i %i", &tipopedido, &tamanhopedido);
        tipopedido--;
        tamanhopedido--;
        if(estoque[tipopedido][tamanhopedido]>0){
            estoque[tipopedido][tamanhopedido]--;
            vendas++;
        }
    }

    printf("%i", vendas);
    return 0;
}
