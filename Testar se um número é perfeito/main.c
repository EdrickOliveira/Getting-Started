#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j, n;

    printf("Digite um numero para testar os numeros perfeitos ate ele\n");
    scanf("%i", &n);

    for(j=1; j<=n; j++){

    int num, i, r=0;

    num=j;

    int divisores[num];

    for(i=1; i<=num; i++){
        if(i==num){
            divisores[i-1]=0;
        }
        else if(num%i==0){
            divisores[i-1]=i;
        }
        else{
            divisores[i-1]=0;
        }
    }

    for(i=0; i<num; i++){
        r=r+divisores[i];
    }

    if(r==num){
        printf("\n%i e um numero perfeito\n", num);
    }
    else{
        //printf("\n%i nao e um numero perfeito\n", num);
    }

    }
    return 0;
}
