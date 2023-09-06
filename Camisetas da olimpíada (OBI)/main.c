#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, Pf, Mf, P, M;

    scanf("%i", &N);
    fflush(stdin);
    while(N<=0 || N>1000){
        printf("\nQuantidade de camisetas deve ser maior que 0 e ate 1000\n");
        scanf("%i", &N);
        fflush(stdin);
    }
    printf("\n");

    int T[N];

    for(i=0; i<N; i++){
        scanf("%i", &T[i]);
        fflush(stdin);
        while(T[i]!=1 && T[i]!=2){
            printf("Tamanho deve ser 1 (pequeno)ou 2 (medio)\n");
            scanf("%i", &T[i]);
            fflush(stdin);
        }
        if(T[i]==1){
            Pf++;
        }
    }
    Mf=N-Pf;

    printf("\n");
    scanf("%i", &P);
    fflush(stdin);
    scanf("%i", &M);
    fflush(stdin);
    while(P+M!=N){
        printf("A soma dos pedidos por 'pequenas' e 'medias' deve ser igual ao total de camisetas\n");
        scanf("%i", &P);
        fflush(stdin);
        scanf("%i", &M);
        fflush(stdin);
    }
    if(P==Pf && M==Mf){
        printf("\nS\n");
    }
    else{
        printf("\nN\n");
    }

    return 0;
}
