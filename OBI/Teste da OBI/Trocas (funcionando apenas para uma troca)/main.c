#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, T;

    scanf("%i %i", &N, &T);
    fflush(stdin);

    int cima[N], baixo[N], i[T], j[T];

    for(int c=0; c<N; c++){
        scanf("%i", &cima[c]);
        fflush(stdin);
    }

    for(int c=0; c<N; c++){
        scanf("%i", &baixo[c]);
        fflush(stdin);
    }

    for(int c=0; c<T; c++){
        scanf("%i %i", &i[c], &j[c]);
        fflush(stdin);
    }

    for(int c=0; i[c]<=j[c]; i[c]++){
            cima[i[c]-1]=baixo[i[c]-1];
    }

    for(int c=0; c<N; c++){
        printf("%i ", cima[c]);
    }

    return 0;
}
