#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, q, f1=0, f2=1;

    printf("Type the quantity of terms you want from the Fibonacci sequence\n");
    scanf("%i", &q);
    if(q==0){
        return 0;
    }
    printf("\n1, ");
    for(i=1; i<q; i++){
        f2=f1+f2;
        f1=f2-f1;
        printf("%i, ", f2);
    }

    printf("\n");
    return 0;
}
