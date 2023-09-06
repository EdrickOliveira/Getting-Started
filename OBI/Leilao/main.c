#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, m, nomec;

    scanf("%i", &n);

    int v[n];
    char nome[n];

    for(i=0; i<n; i++){
        fflush(stdin);
        scanf("%c", &nome[i]);
        scanf("%i", &v[i]);
    }

    m=v[0];
    nomec=nome[0];

    for(i=1; i<n; i++){
        if(v[i]>m){
            m=v[i];
            nomec=nome[i];
        }
    }

    printf("\n%c\n%i\n", nomec, m);

    return 0;
}
