#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, n3, media;


    printf("Digite as tres notas\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media=(n1+n2+n3)/3;
    printf("\nAluno conceito ");
    if(media>=9 && media<=10) {
        printf("A\n");
    }
    else if(9>media>=8){
        printf("B\n");
    }
    else if(media>=6){
        printf("C\n");
    }
    else if(media>=3){
        printf("D\n");
    }
    else if(media<3 && media>=0){
        printf("E\n");
    }
    else{
        printf("Caracter invalido\n");
    }
    return 0;
}
