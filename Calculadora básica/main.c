#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float n1, n2, r;

    printf("CALCULADORA\nDigite a operacao a fazer (entre +, -, * e /)\n");
    scanf("%c", &op);

    if(op=='+' || op=='-' || op=='*' || op=='/'){
        if(op=='+'){
            printf("\nDigite o primeiro numero a somar\n");
            scanf("%f", &n1);
            printf("\nDigite o segundo numero a somar\n");
            scanf("%f", &n2);
            r=n1+n2;
            printf("\n%f + %f = %f\n", n1, n2, r);
        }
        else if(op=='-'){
            printf("\nDigite o minuendo (numero a ser subtraido)\n");
            scanf("%f", &n1);
            printf("\nDigite o subtraendo (numero a subtrair)\n");
            scanf("%f", &n2);
            r=n1-n2;
            printf("\n%f - %f = %f", n1, n2, r);
        }
        else if(op=='*'){
            printf("\nDigite o primeiro numero a ser multiplicado\n");
            scanf("%f", &n1);
            printf("\nDigite o segundo numero a ser multiplicado\n");
            scanf("%f", &n2);
            r=n1*n2;
            printf("\n%f * %f = %f", n1, n2, r);
        }
        else if(op=='/'){
            printf("\nDigite o dividendo (numero a ser dividido)\n");
            scanf("%f", &n1);
            printf("\nDigite o divisor (numero a dividir)\n");
            scanf("%f", &n2);
            if(n2==0){
                printf("\nErro: divisor deve ser diferente de zero\n");
            }
            else{
                r=n1/n2;
            printf("\n%f / %f = %f", n1, n2, r);
            }
        }
        else{}
    }

    else{
        printf("\nOperacao invalida\nTente novamente\n");
    }

    return 0;
}
