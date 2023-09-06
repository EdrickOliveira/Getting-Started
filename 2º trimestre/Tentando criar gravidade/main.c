#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void posicionarCursor(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int ladodamatriz=40, alturadamatriz=40;
    char ver='B', ver2='C', ver3='E', matriz[alturadamatriz][ladodamatriz];
    int l, c, cp=0, lp=0;
    float tempo, tempoant, j, temposubida, tempodescida, tempodescidant;

    for(tempo=0; tempo>=0; tempo=tempo+0.1){
        if(ver2=='C'){
            tempodescida=0;
            ver2='D';
        }
        cp=tempo;
        lp=tempodescida*tempodescida*0.5;

        if(lp>=(alturadamatriz-1)){
            tempoant=tempo;
            tempodescidant=tempodescida;
            j=0;
            ver3='E';
            for(temposubida=0; temposubida>=0 && ver!='A'; temposubida=temposubida+0.1){
                if(ver3=='E'){
                    temposubida=0;
                    ver3='F';
                }
                cp=tempoant+j;
                lp=(alturadamatriz-1)+(-1*tempodescidant*temposubida)+((temposubida*temposubida)/2);
                if(lp>0){
                    for(l=0; l<alturadamatriz; l++){
                        for(c=0; c<ladodamatriz; c++){
                            if(l==lp && c==cp){
                                matriz[l][c]='O';
                            }
                            else{
                                matriz[l][c]='|';
                            }
                        }
                    }
                    posicionarCursor(0, 0);
                    for(l=0; l<alturadamatriz; l++){
                        for(c=0; c<ladodamatriz; c++){
                            printf("%c", matriz[l][c]);
                        }
                        printf("\n");
                    }
                    j=j+0.1;
                    Sleep(100);
                }
                else{
                    ver='A';
                    ver2='C';
                    tempo=tempoant+j;
                    temposubida=0;
                }
            }
        }

        else{
            for(l=0; l<alturadamatriz; l++){
                for(c=0; c<ladodamatriz; c++){
                    if(l==lp && c==cp){
                        matriz[l][c]='O';
                    }
                    else{
                        matriz[l][c]='|';
                    }
                }
            }
            posicionarCursor(0, 0);
            for(l=0; l<alturadamatriz; l++){
                for(c=0; c<ladodamatriz; c++){
                    printf("%c", matriz[l][c]);
                }
                printf("\n");
            }
            Sleep(100);
        }
        ver='B';
        tempodescida=tempodescida+0.1;
    }

    return -1;
}
