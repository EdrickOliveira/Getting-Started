#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V, A, F, P;

    scanf("%i %i %i %i", &V, &A, &F, &P);

    if(A+F+P<=V){
        printf("3");
    }
    else if(A+F<=V){
        printf("2");
    }
    else if(A+P<=V){
        printf("2");
    }
    else if(F+P<=V){
        printf("2");
    }
    else if(A<=V){
        printf("1");
    }
    else if(F<=V){
        printf("1");
    }
    else if(P<=V){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}
