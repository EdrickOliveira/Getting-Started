#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c, v='y';
    int p, x;
    float a, aa, r, r0, i;

    while(v=='y' || v=='Y'){

    printf("Interest calculator\nType 'S' for simple or 'C' for compound\n");
    c=getch();
    while(c!='s' && c!='c' && c!='C' && c!='S'){
        printf("Type a valid mode\n");
        c=getch();
    }
    if(c=='s' || c=='S'){
        printf("\nSimple interest calculator\n\nType the amount invested: ");
        scanf("%f", &a);
        fflush(stdin);
        printf("\nType the interest rate (in percentage, e.g 5 for 5 percent): ");
        scanf("%f", &r);
        fflush(stdin);
        printf("\nType the number of periods: ");
        scanf("%i", &p);
        r=r/100;
        i=r*a*p;
        printf("\n%.2f\n", i);
    }
    else{
        printf("\nCompound interest calculator\n\nType the amount invested: ");
        scanf("%f", &a);
        fflush(stdin);
        printf("\nType the interest rate (in percentage, e.g 5 for 5 percent): ");
        scanf("%f", &r);
        fflush(stdin);
        printf("\nType the number of periods: ");
        scanf("%i", &p);
        r=r/100;
        r=r+1;
        r0=r;
        for(x=1; x<p; x++){
            r=r*r0;
        }
        aa=a*r;
        a=aa-a;
        printf("\n%.2f\n", a);
    }
    printf("\nDo you want to simulate again?\n(Type 'Y' if yes or any other key if no)\n");
    v=getch();
    printf("\n");
    }

    printf("\nTHANKS FOR USING IT!\n");
    return 0;
}
