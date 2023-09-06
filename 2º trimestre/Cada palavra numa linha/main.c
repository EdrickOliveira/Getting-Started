#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    int i;

    gets(string);
    for(i=0; i<100; i++){
        if(string[i]=='\0'){
            break;
        }
        else if(string[i]!=' '){
            printf("%c", string[i]);
        }
        else{
            printf("\n");
        }
    }

    return 0;
}
