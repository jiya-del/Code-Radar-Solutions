// Your code here...
#include<stdio.h>
int main(){
    int num,count=0,i=1;
    scanf("%d",&num);
    while(i<=num){
        if(num%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
   