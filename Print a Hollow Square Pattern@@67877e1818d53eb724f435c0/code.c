// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<=N-1;i++){
        for(int j=0;j<=N-1;j++){
            if(i==0||i==N-1||j==N-1||j==0){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}