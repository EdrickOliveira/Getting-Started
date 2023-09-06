#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q, t, i;

    scanf("%i %i", &q, &t);
    int cima0[q], baixo0[q], cima[q], baixo[q], p1[t], p2[t];

    for(i=0; i<q; i++){
        scanf("%i", &cima0[i]);
        cima[i]=cima0[i];
    }
    for(i=0; i<q; i++){
        scanf("%i", &baixo0[i]);
        baixo[i]=baixo0[i];
    }

    for(i=0; i<t; i++){
        scanf("%i %i", &p1[i], &p2[i]);
        p1[i]--;
        p2[i]--;
    }

    for(i=0; i<t; i++){
        for(int x=0; x<q; x++){
            baixo0[x]=baixo[x];
            cima0[x]=cima[x];
        }
        while(p1[i]!=p2[i] && p1[i]<p2[i]){
            cima[p1[i]]=baixo0[p1[i]];
            baixo[p1[i]]=cima0[p1[i]];
            cima[p2[i]]=baixo0[p2[i]];
            baixo[p2[i]]=cima0[p2[i]];
            p1[i]++;
            p2[i]--;
        }
    }

    printf("\n");
    for(i=0; i<q; i++){
        printf("%i ", cima[i]);
    }
    printf("\n");

    return 0;
}
