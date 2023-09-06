#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, r=0;

    printf("Digite um numero para descobrir seus divisores\n");
    scanf("%i", &num);

    for(i=1; i<=num; i++){
        if(num%i==0){
            printf("\n%i\n", i);
        }
    }

    return 0;
}
