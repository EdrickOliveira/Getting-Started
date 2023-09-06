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
As variáveis criadas dentro da função não interferem na main, e vice-versa
As variáveis criadas nos parênteses são as que serão usadas dentro da função
Os parênteses na chamada da função indicam a qual variável da main equivalem
cada uma da função, na ordem
*/
void preencheVetor(int tamanhoVetor, int v[tamanhoVetor], char* s){
    for(int i=0; i<tamanhoVetor; i++){
        v[i]=leInteiroDaTela(s);
    }
}

//usa-se int quando um valor será retornado da função, neste caso, "soma"
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

    /*dentro da função, o tamanhoVetor equivalerá ao n da main
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
