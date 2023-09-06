#include <stdio.h>
#include <stdlib.h>

float sum(float a, float b){
    return a+b;
}

float minus(float a, float b){
    return a-b;
}

float times(float a, float b){
    return a*b;
}

float divide(float a, float b){
    return a/b;
}

int main()
{
    int a=0;
    float x, y, ans;

    printf("Simple calculator\n");
    while(a!=5){
        printf("\n1 -> +\n2 -> -\n3 -> x\n4 -> /\n5 -> leave\nType your choice: ");
        scanf("%i", &a);
        if(a>0 && a<5){
            printf("\nType the numbers:\n");
            scanf("%i %i", &x, &y);

            if(a==1){
                ans=sum(x, y);
                printf("Result: %f\n", ans);
            }
            else if(a==2){
                ans=minus(x, y);
                printf("Result: %f\n", ans);
            }
            else if(a==3){
                ans=times(x, y);
                printf("Result: %f\n", ans);
            }

            else if(a==4){
                ans=divide(x, y);
                printf("Result: %f\n", ans);
            }
        }
        else if(a==5){
            printf("\nThanks for using it!\n");
                break;
        }
        else{
            printf("That's not an option\n\n");
        }
    }

    return 0;
}
