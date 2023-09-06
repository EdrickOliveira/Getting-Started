#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float n1, n2, r;

    printf("CALCULADORA\nDigite a operacao a fazer (entre +, -, * e /)\n");
    scanf("%c", &op);
    while(op!='+' && op!='-' && op!='*' && op!='/'){
        fflush(stdin);
        printf("\nDigite uma operacao valida\n");
        scanf("%c", &op);
    }

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
            while(n2==0){
                fflush(stdin);
                printf("\nErro: digite um divisor diferente de zero\n");
                scanf("%f", &n2);
            }
            r=n1/n2;
            printf("\n%f / %f = %f", n1, n2, r);
    }
    return 0;
}
