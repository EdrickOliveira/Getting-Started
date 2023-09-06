#include <stdio.h>
#include <stdlib.h>

int funcao1(float a){
    if(a>0){
        return 1;
    }
    else if(a==0){
        return 0;
    }
    else if(a<0){
        return -1;
    }
}

float funcao2(float x, float y, float z, char c){
    float ans;

    if(c=='a' || c=='A'){
        ans=(x+y+z)/3;
    }
    else if(c=='P' || c=='p'){
        ans=(x*3)+(y*5)+(z*7);
        ans=ans/15;
    }

    return ans;
}

int funcao3(int base, int exp){
    int i, ans=1;

    for(i=0; i<exp; i++){
        ans=base*ans;
    }

    return ans;
}

int main()
{
    char c;
    int ans1, ans3, base, exp;
    float f1, f2, f3, f4, ans2;

    printf("Digite um numero para a funcao 1: ");
    scanf("%f", &f1);
    printf("Digite tres numeros e um caracter (a ou p) para a funcao 2: ");
    scanf("%f %f %f", &f2, &f3, &f4);
    fflush(stdin);
    scanf("%c", &c);
    printf("Digite a base e entao o expoente para a funcao 3: ");
    scanf("%i %i", &base, &exp);

    ans1=funcao1(f1);
    ans2=funcao2(f2, f3, f4, c);
    ans3=funcao3(base, exp);

    printf("Resultado da funcao 1: %i\nResultado da funcao 2: %f\nResultado da funcao 3: %i\n", ans1, ans2, ans3);

    return 0;
}
