#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, t, p, i, j, x, y;
    scanf("%i %i", &s, &t);
    int tunel[s+1][s+1];
    for(i=1; i<=s; i++){
        for(j=1; j<=s; j++){
            tunel[i][j]=0;
        }
    }
    for(i=0; i<t; i++){
        scanf("%i %i", &x, &y);
        tunel[x][y]=1;
        tunel[y][x]=1;
    }

    scanf("%i", &p);
    int sugestao[p][1001], n[p];
    for(i=0; i<p; i++){
        scanf("%i", &n[i]);
        for(j=0; j<n[i]; j++){
            scanf("%i", &sugestao[i][j]);
        }
    }

    for(i=0; i<p; i++){
        for(j=1; j<n[i]; j++){
            if(tunel[sugestao[i][j-1]][sugestao[i][j]]==0){

            }
        }
    }

    return 0;
}
