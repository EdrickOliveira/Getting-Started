#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, G0, G, B, x, y, r;

    scanf("%i", &R);
    fflush(stdin);
    scanf("%i", &G0);
    fflush(stdin);
    scanf("%i", &B);
    fflush(stdin);

    for(int i=0; i>=0; i++){
        if((R-i)%G0==0){
            R=R-i;
            R=R*R;
            G=G0*G0;

            x=R/G;
            i=-2;
        }
    }

    for(int i=0; i>=0; i++){
        if((G0-i)%B==0){
            G=G0-i;
            G=G*G;
            B=B*B;

            y=G/B;
            i=-2;
        }
    }

    r=x*y+x+1;

    printf("%i", r);

    return 0;
}
