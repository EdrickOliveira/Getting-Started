#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arrayInversor(int list[], int revlist[], int n){
    int i, j=0;
    for(i=(n-1); i>=0; i--){
        revlist[j]=list[i];
        j++;
    }
}

int palindromeTest(int list[], int revlist[], int n){
    int i, v=0;

    for(i=0; i<n; i++){
        if(list[i]==revlist[i]){}
        else{
            v++;
            break;
        }
    }
    if(v==0){
        return 1;
    }
    else{
        return 0;
    }
}

void resetChangedList(int list[], int changedlist[], int n){
    for(int i=0; i<n; i++){
        changedlist[i]=list[i];
    }
}

int randomNumberBetween(int max, int min){
    int ans;
    srand(time(NULL));

}

int main()
{
    int n, i, j, v, p1, p2, somes=0;
    scanf("%i", &n);
    int list[n], revlist[n], changedlist[n];
    resetChangedList(list, changedlist, n);

    for(i=0; i<n; i++){
        scanf("%i", &list[i]);
    }
    arrayInversor(list, revlist, n);
    v=palindromeTest(list, revlist, n);
    //if the list is a palindrome v=1. Otherwise, v=0

    if(v==1){
        printf("%i", somes);
        return 0;
    }


    return 0;
}
