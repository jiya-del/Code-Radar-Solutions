// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a=1;
    for(int i=1;i<=N;i++){
        for (int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
            a+=2;
        }
        printf("\n");
    }
}