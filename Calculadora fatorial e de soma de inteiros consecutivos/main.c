#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n, nd;

    printf("Digite um numero para descobrir seu fatorial e sua soma dos inteiros consecutivos\n");
    scanf("%i", &nd);
    n=nd;

    for(i=1; i<nd; i++){
        n=n*(nd-i);
    }

    printf("\n%i! = %i", nd, n);

    n=nd;

    for(i=1; i<nd; i++){
        n=n+(nd-i);
    }
    printf("\nSoma dos inteiros consecutivos de %i = %i\n", nd, n);

    return 0;
}
