#include <stdio.h>
#include <stdlib.h>

int main()
{
    int letra, numero;

    printf("Digite uma letra\n");
    letra=getch();
    if(letra>=65 && letra <=90){
    }
    else if(letra>=97 && letra<=122){
    }
    else{
        printf("\nVoce digitou uma letra invalida.\nPressione qualquer tecla para sair\n");
        getch();
        return 0;
    }

    printf("\nDigite um numero\n");
    scanf("%i", &numero);

    if(letra==65 || letra==69 || letra==73 || letra==79 || letra==85 || letra==97 || letra==101 || letra==105 || letra==111 || letra==117){
        printf("\nA letra digitada e vogal\n");
    }
    else{
        printf("\nA letra digitada nao e vogal\n");
    }

    if(numero<10){
        printf("\nO numero digitado e menor que 10\n");
    }
    else if(numero==10){
        printf("\nO numero digitado e igual a 10\n");
    }
    else if(numero>10 && numero<100){
        printf("\nO numero digitado e maior que 10 e menor que 100\n");
    }
    else if(numero==100){
        printf("\nO numero digitado e igual a 100\n");
    }
    else if(numero>100 && numero<1000){
        printf("\nO numero digitado e maior que 100 e menor que 1000\n");
    }
    else if(numero==1000){
        printf("\nO numero digitado e igual a 1000\n");
    }
    else if(numero>1000){
        printf("\nO numero digitado e maior que 1000\n");
    }
    else{}

    printf("\n\nPressione qualquer tecla para sair\n");
    getch();
    return 0;
}
