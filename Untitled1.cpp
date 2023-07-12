#include<stdio.h>

int main(){
    int n=2;
    for( int i=1; i<=n; i++){
        int k=1;
        for(int j=1; j<=n*2+1; j++){
            if(j<n-i+2 || j>n-i+1){
                printf("+");
            }
            else{
                printf("%d", k);
                k++;
            }
           
        }
        printf("\n");
    }
}