#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distanciadig, sensor;
    float distancia;

    scanf("%i", &distanciadig);

    for(int i=6; i<9;i++){
        distancia=(distanciadig-i)%8;
        if(distancia==0){
            sensor=i-5;
        }
    }

    printf("\n%i\n", sensor);

    return 0;
}
