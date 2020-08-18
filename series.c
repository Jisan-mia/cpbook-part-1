#include <stdio.h>

int main(){
    int n, sum, start, dif, end;
    sum = 0;
    printf("Enter starting, difference and ending number: \n");
    scanf("%d %d %d", &start, &dif, &end);
    for(n = start; n <= end; n= n + dif){
        sum= sum + n;
    }
    printf("Sum is %d\n", sum);
    return 0;
}
