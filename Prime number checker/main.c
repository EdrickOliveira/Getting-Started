#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='a';
    int i=2, numt, num;

    printf("Type a number to know if is it prime or not\n");
    scanf("%i", &numt);
    while(c!='Q'){
        num=numt%i;
        if(num==0 && i!=numt){
            printf("\nThis number isn't prime because it can be divided by %i\n", i);
            return 0;
        }
        i++;
        if(i==32767){
            c='Q';
        }
    }
    printf("\nThis number is prime\n");


    return 0;
}
