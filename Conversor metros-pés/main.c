#include <stdio.h>
#include <stdlib.h>

int main()
{
    int modo, alturai, alturapint, highpw, highp, highiw, highi, highm;
    float altura, alturap, alturaid, highpm, highim;

    printf("Conversor de altura sistema metrico/americano\nPressione qualquer tecla para comecar\n");
    getch();
    printf("\nPressione M para converter do sistema metrico para o americano\n");
    printf("Pressione A para converter do sistema americano para metrico\n");
    modo=getch();

    if(modo==65 || modo==77 || modo==97 || modo==109) {

        if(modo==77 || modo==109) {
                printf("\nDigite sua altura em centimetros\n");
                scanf("%f", &altura);
                alturap=altura/30.48;
                alturapint=alturap;
                if(alturap>=6 && alturap<7) {
                    alturaid=alturap-6;
            }
                else if(alturap>=5 && alturap<6) {
                    alturaid=alturap-5;
            }
                else if(alturap>=4 && alturap<5) {
                    alturaid=alturap-4;
            }
                else if(alturap>=7 && alturap<8) {
                    alturaid=alturap-7;
            }
                else if(alturap>=3 && alturap<4) {
                    alturaid=alturap-3;
            }
                else {
                    printf("\nAltura invalida\nSomente numeros entre 92 e 243\n");
                    printf("\n\nPressione qualquer tecla para sair\n");
                    getch();
                    return 0;
            }

                alturai=alturaid*12;
                printf("\nSua altura no sistema americano e %i'%i\"", alturapint, alturai);
                if(alturai>=10){
                    printf("\b\b  ");
                    printf("\b\b\"");
                }
                else{}
                printf("\n");
    }

    else if(modo==65 || modo==97) {
            printf("\nDigite quantos pes de altura voce tem\n");
            highpw=getch();
            highp=highpw-48;
            printf("%i", highp);
            highpm=highp*30.48;
            printf("\nDigite quantas polegadas de altura voce tem\n");
            highiw=getch();
            highi=highiw-48;
            printf("%i", highi);
            highim=highi*2.54;
            highm=highim+highpm;
            printf("\nSua altura no sistema metrico e de aproximadamente %icm\n", highm);

}

}
    else {
        printf("\nCaractere invalido. Tente novamente\n");
}
    printf("\n\nPressione qualquer tecla para sair\n");
    getch();

    return 0;
}
