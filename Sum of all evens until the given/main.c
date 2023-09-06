#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='a';
    int i, nt, n, r;

while(c=='a' || c=='A'){
    printf("Sum of all even number from zero to yours\n");
    scanf("%i", &nt);
    while(nt<0){
        fflush(stdin);
        printf("\nNumber invalid. Type a number greater than 0\n");
        scanf("%i", &nt);
    }
    r=0;
    for(i=nt; i>=0; i--){
        n=i%2;
        if(n==0){
            r=r+i;
        }
    }
    printf("\nThe sum equals to %i\n\nType 'A' to try again or any other key to leave\n\n", r);
    c=getch();
}
    return 0;
}
