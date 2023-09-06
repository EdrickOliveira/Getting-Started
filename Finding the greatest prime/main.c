#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x='q';
    int m, i, q, v;

    printf("Type the quantity of numbers to know the greatest prime: ");
    scanf("%i", &q);

    int n[1000];

    printf("\nType them:\n");
    for(i=0; i<q; i++){
        scanf("%i", &n[i]);
    }

    for(i=0; i<q; i++){
        v=2;
        x='q';
        while(x!='a'){
            if(n[i]==1){
                n[i]=-10;
                x='a';
            }
            else if(n[i]==v){
                x='a';
            }
            else if(n[i]%v==0){
                n[i]=-10;
                x='a';
            }
            else{
                x='q';
            }
            v++;
        }
    } /*when this "for" is completed, all non-prime numbers
    will be defined as -10*/

    m=n[0];
    for(i=0; i<q; i++){
        if(n[i]>m){
            m=n[i];
        }
    }

    printf("\n%i", m);

    return 0;
}
