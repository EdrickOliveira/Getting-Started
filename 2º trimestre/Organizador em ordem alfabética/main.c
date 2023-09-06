#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q, i, j, toplist=0;

    printf("Quantity of items: ");
    scanf("%i", &q);
    fflush(stdin);
    char str[q][100];
    int score[q];

    for(i=0; i<q; i++){
        score[i]=0;
    }

    for(i=0; i<q; i++){
        gets(str[i]);
    }

    printf("\n");

    for(i=0; i<q; i++){
        for(j=0; j<q; j++){
            score[i]=score[i]+strcmp(str[i], str[j]);
        }
    }

    for(i=0; i<q; i++){
        for(j=0; j<q; j++){
            if(score[j]<score[toplist]){
                toplist=j;
            }
        }
        printf("%s\n", str[toplist]);
        score[toplist]=q;
    }

    return 0;
}
