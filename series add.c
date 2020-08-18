#include <stdio.h>

int main(){
    int i,n, sum=0;
    scanf("%d", &n);
    printf("________\n");
    for(i=1;i<=n;i=i+2){
        printf("%d\n", i);
        sum = sum + i ;
    }
    printf("Sum: %d", sum);
    return 0;
}
