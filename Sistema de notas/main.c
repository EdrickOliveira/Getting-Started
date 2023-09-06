#include <stdio.h>
#include <stdlib.h>

int main()
{

    int percentual; //diz respeito ao percentual de acertos, aproveitamento
    float notau, notad, notat, notaudt, mnota, peso, notaf, notac, notafc; //nota um, nota dois, nota três, soma das notas, média das notas, nota máxima, nota final em decimal (de 0 a 1), nota de corte e nota de corte em forma decimal (de 0 a 1)


    printf("Digite o peso\n");
    scanf("%f", &peso); //recebimento do "peso"
    printf("\nDigite a nota de corte\n");
    scanf("%f", &notac); //recebimento da nota de corte
    printf("\nDigite suas tres notas\n");
    scanf("%f %f %f", &notau, &notad, &notat); //recebimento das notas
    notaudt=notau+notad+notat; //definir soma das notas
    mnota=notaudt/3; //definir média das 3 notas
    notaf=mnota/peso; //definir nota final em forma decimal (de 0 a 1)
    percentual=notaf*100; //definir percentual de acertos com base na nota final
    notafc=notac/peso; //definir nota final de forma decimal (de 0 a 1)
    if(notaf>=notafc) {
        printf("\n\nAprovado, parabens!\n"); //se a nota final decimal for maior ou igual à nota de corte decimal, mensagem de aprovado
}
    else{
        printf("\n\nReprovado, se esforce mais ano que vem.\n"); //se a nota final decimal for menor que a nota de corte decimal, mensagem de reprovado
}
    printf("\nSua media e de %.1f com %i%% de acertos\n\n\n\n\n\n\n\n", mnota, percentual); //mostra a média das notas e percentual de acertos
    printf("Pressione qualquer tecla para sair");
    getch();
    return 0;
}
