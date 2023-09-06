#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, l, l1, c1, c, linhaorigem, colunaorigem, passos, ladodamatriz;
    scanf("%i", &ladodamatriz);
    int matriz[ladodamatriz][ladodamatriz];

    for(l=0; l<ladodamatriz; l++){
        for(c=0; c<ladodamatriz; c++){
            matriz[l][c]=-5;
        }
    }
    scanf("%i %i", &linhaorigem, &colunaorigem);
    printf("\n");
    linhaorigem--;
    colunaorigem--;
    matriz[linhaorigem][colunaorigem]=0;

    for(l=0; l<ladodamatriz; l++){
        for(c=0; c<ladodamatriz; c++){
            if(matriz[l][c]<0){
                for(i=1; i<ladodamatriz; i++){
                    if(l==linhaorigem+i && c==colunaorigem){
                        matriz[l][c]=i;
                    }
                    else if(l==linhaorigem-i && c==colunaorigem){
                        matriz[l][c]=i;
                    }
                    else if(c==colunaorigem+i && l==linhaorigem){
                        matriz[l][c]=i;
                    }
                    else if(c==colunaorigem-i && l==linhaorigem){
                        matriz[l][c]=i;
                    }
                    else if(l<linhaorigem && c<colunaorigem){
                        passos=0;
                        l1=l;
                        c1=c;
                        while(l1<linhaorigem){
                            l1++;
                            passos++;
                        }
                        while(c1<colunaorigem){
                            c1++;
                            passos++;
                        }
                        matriz[l][c]=passos;
                    }
                    else if(l<linhaorigem && c>colunaorigem){
                        passos=0;
                        l1=l;
                        c1=c;
                        while(l1<linhaorigem){
                            l1++;
                            passos++;
                        }
                        while(c1>colunaorigem){
                            c1--;
                            passos++;
                        }
                        matriz[l][c]=passos;
                    }
                    else if(l>linhaorigem && c<colunaorigem){
                        passos=0;
                        l1=l;
                        c1=c;
                        while(l1>linhaorigem){
                            l1--;
                            passos++;
                        }
                        while(c1<colunaorigem){
                            c1++;
                            passos++;
                        }
                        matriz[l][c]=passos;
                    }
                    else if(l>linhaorigem && c>colunaorigem){
                        passos=0;
                        l1=l;
                        c1=c;
                        while(l1>linhaorigem){
                            l1--;
                            passos++;
                        }
                        while(c1>colunaorigem){
                            c1--;
                            passos++;
                        }
                        matriz[l][c]=passos;
                    }
                }
            }
        }
    }

    for(l=0; l<ladodamatriz; l++){
        for(c=0; c<ladodamatriz; c++){
            printf("%i ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
