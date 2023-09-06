#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='0';
    int ver, i, contador=0;
    float num;

    while(c!='q' && c!= 'Q'){
        if(contador>0){
            printf("\n");
        }
        printf("Digite um numero inteiro: \n");
        do{
            scanf("%f", &num);
            ver=num;
            if(num!=ver){
                printf("O numero digitado nao e inteiro\n");
            }
        }while(num!=ver);

        printf("Digite uma letra entre 'A', 'B', 'C' ou 'Q': ");
        do{
            fflush(stdin);
            scanf("%c", &c);
            if(c!='A' && c!='B' && c!='C' && c!='Q' && c!='a' && c!='b' && c!='c' && c!='q'){
                printf("\nA letra deve ser 'A', 'B', 'C' ou 'Q': ");
            }
        }while(c!='A' && c!='B' && c!='C' && c!='Q' && c!='a' && c!='b' && c!='c' && c!='q');

        if(c=='a' || c=='A'){
            printf("Os numeros divisiveis por 4 de um ate o numero digitado sao:\n");
            for(i=1; i<=ver; i++){
                if(i%4==0){
                    printf("%i\n", i);
                }
            }
        }
        else if(c=='b' || c=='B'){
            printf("Os numeros pares de um ate o numero digitado sao:\n");
            for(i=1; i<=ver; i++){
                if(i%2==0){
                    printf("%i\n", i);
                }
            }
        }
        else if(c=='c' || c=='C'){
            for(i=0; i<ver; i++){
                printf("Edrick\n");
            }
        }
        else{
            return 0;
        }
        contador++;
    }
}
