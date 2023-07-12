#include<stdio.h>

int main(){
    char Character;

    printf("Enter the Character:\n");
    scanf("%c",&Character);

     if(Character>='A' && Character<='Z' || Character>='a' && Character<='z' ){
        printf("Entered Character is an Alphabet\n");
    
     }
     else{
        printf("Entered Character is not an Alphabet\n");
     }
    return 0;
}