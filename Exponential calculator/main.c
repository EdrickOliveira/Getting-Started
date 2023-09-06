#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='a';
    int bt, b, e, i;

    while(c=='a' || c=='A'){

        printf("Exponential calculator\n");
        printf("\nType the base number\n");
        scanf("%i", &bt);
        fflush(stdin);
        printf("\nType the exponent\n");
        scanf("%i", &e);

        if(e==0){
            printf("\n%i^0 = 1\n", bt);
        }
        else{
            b=bt;
            for(i=1; i<e; i++){
                b=b*bt;
            }
            printf("\n%i^%i = %i\n", bt, e, b);
        }
        printf("\nType 'A' to try again or any other key to leave\n");
        c=getch();
    }
    return 0;
}
