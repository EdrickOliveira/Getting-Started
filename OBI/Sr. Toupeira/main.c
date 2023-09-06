#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, S, T, X, Y, P, x=0;

    scanf("%i %i", &S, &T);
    for(i=0; i<T; i++){
        scanf("%i %i", &X, &Y);
    }
    scanf("%i", &P);

    int N[P];

    for(i=0; i<P; i++){
        scanf("%i", &N[i]);
        int C[N[i]];
        while(x<N[i]){
            scanf("%i", &C[x]);
            x++;
        }
    }


    return 0;
}
