#include <stdio.h>
#include <stdlib.h>

void imprimeSeparador(){
    printf("------------\n");
}

int leInteiroDaTela(char* s){

    int numero;

    printf("%s", s);
    scanf("%d", &numero);

    return numero;
}

/*
As vari�veis criadas dentro da fun��o n�o interferem na main, e vice-versa
As vari�veis criadas nos par�nteses s�o as que ser�o usadas dentro da fun��o
Os par�nteses na chamada da fun��o indicam a qual vari�vel da main equivalem
cada uma da fun��o, na ordem
*/
void preencheVetor(int tamanhoVetor, int v[tamanhoVetor], char* s){
    for(int i=0; i<tamanhoVetor; i++){
        v[i]=leInteiroDaTela(s);
    }
}

//usa-se int quando um valor ser� retornado da fun��o, neste caso, "soma"
int somaElementosVetor(int tamanhoVetor, int v[tamanhoVetor]){
    int soma=0;

    for(int i=0; i<tamanhoVetor; i++){
        soma=soma+v[i];
    }

    return soma;
}

int main() {
    imprimeSeparador();

    int n=leInteiroDaTela("Informe o valor de n: ");

    int v1[n];

    /*dentro da fun��o, o tamanhoVetor equivaler� ao n da main
e o v ao v1 da main*/
    preencheVetor(n, v1, "Informe um valor para o primeiro vetor: ");

    imprimeSeparador();

    int m = leInteiroDaTela("Informe o valor de m: ");

    int v2[m];

    preencheVetor(m, v2, "Informe um valor para o segundo vetor: ");

    imprimeSeparador();

    int soma=somaElementosVetor(n, v1)+somaElementosVetor(m, v2);

    printf("%d", soma);

    return 0;
}
