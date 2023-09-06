#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    char caracter=65, dado='V', tecla, letra;
    int timer=100;
    float temp, notau, notad, notat;


    //Aula de 30/03/2023

    //inserindo um número para aparecer após o "enter"

    printf("Entre com um numero\n");
    scanf("%i", &timer);
    printf("Tu entraste com %i\n", timer);


    //inserindo um caracter para aparecer após o "enter"

    printf("\nPressione um caracter\n");
    tecla=getchar();
    printf("Tu pressionaste %c\n", tecla);


    //colocando um float

    printf("Entre com um numero\n");
    scanf("%f", &temp);
    printf("Tu entraste com %f\n", temp);


    //delimitando a quantidade de casas decimais

    printf("Entre com um numero\n");
    scanf("%f", &temp);
    printf("Tu entraste com %.2f\n", temp);


    //colocando mais de um número

    printf("Entre com um numero\n");
    scanf("%f %i", &temp, &timer);
    printf("Tu entraste com %.2f e %i\n", temp, timer);


    //colocando um caracter junto

    printf("Entre com um numero com virgula, um numero natural e entao um caracter\n");
    scanf("%f %i %c", &temp, &timer, &tecla);
    printf("Tu entraste com %.2f e %i e %c\n", temp, timer, tecla);


    //aprendendo a função "if"

    printf("Entre com um numero natural\n");
    scanf("%i", &timer);
    if(timer>=8) { //se for usar apenas igual, deve ser duplicado (==)
        printf("O numero e maior que 8\n");
}
    else{
        printf("O numero e menor que 8\n");
    }
*/


    //aprendendo o loop "for"
    /*for(inicialização; teste/condição; ação){
    }
    x=x+1 é equivalente a x++ e a x+=1, assim como x=x-1 equivale a x-- e x-=1
    Também pode ser usado x*=3 para multiplicar a variável por 3 ou x/=3

    for(x=0; x<10; x++){
        printf("%i\n", x);
    }

    printf("Digite um numero\n");
    scanf("%i", &num);

    for(x=1; x<=num; x++){
        printf("%i\n", num);
    }


    //testes para a calculadora fatorial

    int numd;
    num=5;
    numd=num;

    num=num*(numd-1);
    num=num*(numd-2);
    num=num*(numd-3);
    num=num*(numd-4);
    printf("%i", num);



	//calculadora básica

    char op;
    float n1, n2, r;

    printf("Por favor digite dois numeros!\n");
    scanf("%f%f", &n1, &n2);
    fflush(stdin);
    printf("Qual e a operacao? (+, -, *, /)\n");
    scanf("%c", &op);
    if(op=='+'){
        r=n1+n2;
    }
    else if(op=='-'){
        r=n1-n2;
    }
    else if(op=='*'){
        r=n1*n2;
    }
    else if(op=='/'){
        r=n1/n2;
    }
    else{
        printf("Operacao invalida\nTente novamente\n");
    }
    printf("O resultado e %f", r);


    //calculadora fatorial

    int x, numdig, num;

    printf("Digite um numero para calcular seu fatorial\n");
    scanf("%i", &numdig);
    num=numdig;

    for(x=1; x<=(numdig-1); x++){
        num=num*(numdig-x);
    }
    printf("\n%i! = %i\n", numdig, num);



    //aprendendo o laço "while"

    int temp;
    char c='a';

    while(c!='Q'){
        printf("temp=%i\n", temp);
        temp++;
        c=getch();
    }


    //o resto é o resto da divisão, não o resto decimal
    int x=3, y=11, z;

    z=y%x;

    printf("%f", z);

    //aprendendo o laço do-while

    do{
        printf("Faça isso, e caso(i<10), repita");
    }while(i<10);

    */

    return 0;
}
