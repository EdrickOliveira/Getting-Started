#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    float input[3], weight[2][3][2], bias[2][3][2], hidden[2], output[1];

    for(i=0; i<2; i++){
        hidden[i]=0;
    }
    for(i=0; i<2; i++){
        output[i]=0;
    }

    for(j=0; j<3; j++){
        for(k=0; k<2; k++){
            printf("Weight [%i][%i][%i]: ", 0, j, k);
            scanf("%f", &weight[0][j][k]);
            weight[0][j][k]=weight[0][j][k]/100;
            printf("Bias [%i][%i][%i]: ", 0, j, k);
            scanf("%f", &bias[0][j][k]);
            bias[0][j][k]=bias[0][j][k]/100;
        }
    }
    for(j=0; j<2; j++){
        for(k=0; k<1; k++){
            printf("Weight [%i][%i][%i]: ", 1, j, k);
            scanf("%f", &weight[1][j][k]);
            weight[1][j][k]=weight[1][j][k]/100;
            printf("Bias [%i][%i][%i]: ", 1, j, k);
            scanf("%f", &bias[1][j][k]);
            bias[1][j][k]=bias[1][j][k]/100;
        }
    }

    for(i=0; i<3; i++){
        printf("Input[%i]: ", i);
        scanf("%f", &input[i]);
    }
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            hidden[i]=(input[j]*weight[0][j][i])+bias[0][j][i]+hidden[i];
        }
    }
    for(i=0; i<1; i++){
        for(j=0; j<2; j++){
            output[i]=(hidden[j]*weight[1][j][i])+bias[1][j][i]+output[i];
        }
    }

    printf("%f", output[0]);

    return 0;
}
