#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, T; //N=quantidade de cartas e T=quantidade de trocas

    scanf("%i %i", &N, &T);

    int cima[100000], baixo[100000], i[100000], j[100000];

    for(int c=0; c<N; c++){
        scanf("%i", &cima[c]);
    }

    for(int c=0; c<N; c++){
        scanf("%i", &baixo[c]);
    }

    for(int c=0; c<T; c++){
        scanf("%i %i", &i[c], &j[c]);
    }

    for(int c=0; c<T; i[c]++){
        int p1=i[c], p2=j[c];
        int dif=p2-p1;
        for(int d=0; d<dif; d++){
            if(p1>p2){
                break;
            }
            else if(p1==p2){
                int c1=cima[p1], b1=baixo[p1];
                cima[p1]=b1;
                baixo[p1]=c1;
            }
            else{
                int c1=cima[p1], c2=cima[p2], b1=baixo[p1], b2=baixo[p2];
                cima[p1]=b1;
                baixo[p1]=c1;
                cima[p2]=b2;
                baixo[p2]=c2;
                p1++;
                p2--;
            }
        }
    }

    for(int c=0; c<N; c++){
        printf("%i ", cima[c]);
    }

    return 0;
}
