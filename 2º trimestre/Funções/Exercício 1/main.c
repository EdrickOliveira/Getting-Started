#include <stdio.h>
#include <stdlib.h>

int pedirDado(char* s){
    int n;
    printf("%s", s);
    scanf("%d", &n);
    return n;
}

int maiorElementoVetor(int quantidadeElementos, int vetor[quantidadeElementos]){
    int maior=-100000;
    for(int i=0; i<quantidadeElementos; i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    return maior;
}

void pedirVetor(char* s, int quantidadeElementos, int vetor[quantidadeElementos]){
    printf("%s", s);
    for(int i=0; i<quantidadeElementos; i++){
        vetor[i]=pedirDado("");
    }
}

void imprimirVetor(int quantidadeElementos, int vetor[quantidadeElementos]){
    for(int i=0; i< quantidadeElementos; i++){
        printf("%d ", vetor[i]);
    }
}

int main(){
    int n=pedirDado("Digite o tamanho do vetor: "), vetor[n], maior;
    pedirVetor("Digite os elementos do vetor: ", n, vetor);
    maior=maiorElementoVetor(n, vetor);
    printf("\nO maior elemento e %d\n", maior);

    return 0;
}
