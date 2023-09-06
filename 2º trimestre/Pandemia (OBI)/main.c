#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, j, k, l, n, m, i, r, a, x, infectados=0;

    scanf("%i %i %i %i", &n, &m, &i, &r);
    i--;
    r--;

    int amigo[n][m], veio[n][m];

    for(j=0; j<n; j++){
        for(k=0; k<m; k++){
            amigo[j][k]=0;
        }
    }

    for(j=0; j<n; j++){
        for(k=0; k<m; k++){
            veio[j][k]=0;
        }
    }

    for(j=0; j<m; j++){
        scanf("%i", &a);
        for(k=0; k<a; k++){
            scanf("%i", &x);
            x--;
            veio[x][j]=1;
        }
    }

    for(j=0; j<n; j++){
        if(veio[j][r]==1){
            for(k=0; k<(m-r); k++){
                amigo[j][r+k]=1;
                if(veio[j][r+k]==1){
                    veio[j][r+k]++;
                }
            }
            infectados++;
        }
    }

    for(l=1; l<(m-r); l++){
        for(j=0; j<n; j++){
            if(veio[j][r+l]>=1 && amigo[j][r+l]==1){
                for(k=0; k<n; k++){
                    if(veio[k][r+l]==1){
                        for(h=0; h<(m-r-l); h++){
                            amigo[k][r+l+h]==1;
                            if(veio[k][r+l+h]==1){
                                veio[k][r+l+h]++;
                            }
                        }
                        infectados++;
                    }
                }
                break;
            }
        }
    }

    printf("\n%i\n", infectados);

    return 0;
}
