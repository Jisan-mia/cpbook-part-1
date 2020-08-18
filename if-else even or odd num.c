#include <stdio.h>
int main(){
    int x;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    if(x%2==0){
        printf("\nx is even number\n");
    }
    else{
        printf("x is negative number\n");
    };
    return 0;
}


