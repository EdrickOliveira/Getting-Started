#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo, sexodomenorsalario, verificador;
    int i, q, qfem=0, idade, maioridade=0, menoridade=1000, idadedomenorsalario;
    float salario, somasalario=0, mediasalario, menorsalario=1000000;

    printf("Digite a quantidade de entravistados: ");
    scanf("%i", &q);

    for(i=1; i<=q; i++){
        printf("\nIdade do entrevistado %i: ", i);
        scanf("%i", &idade);
        if(idade<0){
            printf("Nao digita mais nada, como que o cara tem idade negativa oh idiota??\n");
            verificador='j';
            break;
        }
        do{
            printf("Sexo do entrevistado %i: ", i);
            fflush(stdin);
            scanf("%c", &sexo);
            if(sexo!='m' && sexo!='M' && sexo!='f' && sexo!='F'){
                printf("Este programa foi construido no seculo 20, quando ainda existia so homens e mulheres. Digita um deles\n");
            }
        }while(sexo!='m' && sexo!='M' && sexo!='f' && sexo!='F');

        printf("Salario do entrevistado %i: ", i);
        scanf("%f", &salario);

        somasalario=somasalario+salario;

        if(maioridade<idade){
            maioridade=idade;
        }

        if(menoridade>idade){
            menoridade=idade;
        }

        if(sexo=='F' || sexo=='f'){
            qfem++;
        }

        if(menorsalario>salario){
            menorsalario=salario;
            idadedomenorsalario=idade;
            sexodomenorsalario=sexo;
        }
    }
    if(verificador!='j'){

        mediasalario=somasalario/q;

        printf("\nA media de salario e %f\n", mediasalario);
        printf("A maior idade e %i\n", maioridade);
        printf("A menor idade e %i\n", menoridade);
        printf("Ha %i mulheres na regiao\n", qfem);
        printf("A pessoa com o menor salario tem %i anos e e do sexo %c\n", idadedomenorsalario, sexodomenorsalario);
    }

    return 0;
}
