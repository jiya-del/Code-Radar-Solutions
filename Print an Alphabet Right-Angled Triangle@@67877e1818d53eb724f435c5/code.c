// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            int b=a+64;
            char c=(char)b;

            
            printf("%c ",c);
            a++;
            
        }
        printf("\n");
    }
    return 0;
}