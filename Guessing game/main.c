#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='a';
    int n=493, un, a=1;

    while(c=='a'){

    printf("Welcome to the number guessing game!\nType a number: ");
    scanf("%i", &un);
    while(un!=n){
        if(un>n){
            printf("\nThis number is too high! Try another: ");
        }
        else{
            printf("\nThis number is too low! Try another: ");
        }
        scanf("%i", &un);
        a++;
    }
    printf("\nCongratulations! You typed the right number!\nAttempts: %i\n\nType 'a' to try again or any other key to leave\n\n", a);
    c=getch();
    }
    printf("\nTHANKS FOR PLAYING\n");
    return 0;
}
