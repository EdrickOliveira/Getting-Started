#include <stdio.h>
#include <stdlib.h>


int main()
{

    char s1[100], s2[100];
    int i, j=0, ssize=0;

    printf("Type a sentence\n");
    gets(s1);
    for(i=0; i<100; i++){
        if(s1[i]=='\0'){
            break;
        }
        else{
            ssize++;
        }
    }

    for(i=(ssize-1); i>=0; i--){
        s2[i]=s1[j];
        j++;
    }

    printf("%s\n%s", s1, s2);

    return 0;
}
