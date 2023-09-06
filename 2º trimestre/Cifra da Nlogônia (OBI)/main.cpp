#include <iostream>
#include <stdio.h>
#include <string>

int main()
{
    std::string word, cword;
    char stepsf, stepsb;

    std::cin >> word;
    cword=word;

    for(int i=0; i<word.length(); i++){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
            std::cout << word[i];
        }
        else{
            std::cout << word[i];
            stepsb=cword[i];
            stepsf=cword[i];
            while(cword[i]!='a' && cword[i]!='e' && cword[i]!='i' && cword[i]!='o' && cword[i]!='u'){
                stepsb--;
                stepsf++;
                if(stepsb=='a' || stepsb=='e' || stepsb=='i' || stepsb=='o' || stepsb=='u'){
                    cword[i]=stepsb;
                }
                else if(stepsf=='a' || stepsf=='e' || stepsf=='i' || stepsf=='o' || stepsf=='u'){
                    cword[i]=stepsf;
                }
            }
            std::cout << cword[i];
            stepsf=word[i];
            if(stepsf=='z'){
                std::cout << stepsf;
            }
            else{
                do{
                    stepsf++;
                }
                while(stepsf=='a' || stepsf=='e' || stepsf=='i' || stepsf=='o' || stepsf=='u' || stepsf=='w' || stepsf=='y');
            std::cout << stepsf;
            }
        }
    }

    return 0;
}
