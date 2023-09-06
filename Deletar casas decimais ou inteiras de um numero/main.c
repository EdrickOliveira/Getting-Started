#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='q';
    int i=0, v;
    float f;

    printf("%Digite um numero decimal para receber apenas sua parte decimal (ate 6 casas decimais)\n");
    scanf("%f", &f);
    v=f;
    while(c!='a'){
        if(v==i){
            f=f-i;
            c='a';
        }
        else{
            i++;
        }
    }
    printf("%f", f); //esse "f" é a saída da parte decimal da entrada

    return 0;
}
