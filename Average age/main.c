#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age[3];

    printf("Type three ages\n");
    for(int i=0; i<3; i++){
        scanf("%i", &age[i]);
    }
    printf("\nCamila's one is ");
    if((age[1]>age[0] && age[1]<age[2]) || (age[1]<age[0] && age[1]>age[2])){
        printf("%i\n", age[1]);
    }
    else if((age[0]>age[1] && age[0]<age[2]) || (age[0]<age[1] && age[0]>age[2])){
        printf("%i\n", age[0]);
    }
    else if((age[2]>age[1] && age[2]<age[0]) || (age[2]<age[1] && age[2]>age[0])){
        printf("%i\n", age[2]);
    }
    else{}

    return 0;
}
