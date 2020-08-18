#include <stdio.h>
/*
int main(){
    int ara[] = {10,20,30,40,50,60,70,80,90,100};
    int i, j;
    int ara2[10];
    for(i=0, j=9;i<10; i++, j--){
        ara2[j] = ara[i];
    }
    for(i=0; i<10;i++){
        ara[i] = ara2[i];
    }
    for(i = 0; i<10; i++){
        printf("%d\n", ara[i]);
    }

    return 0;
}
*/

// reversing an array in c programming:

int main(){
    int i,j,n=10, temp;
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for(i=0, j=n-1; i<j; i++,j--){
        temp = ara[i];
        ara[i]= ara[j];
        ara[j] = temp;
    }
    for(i=0;i<n;i++){
       // printf("%d \n", ara[i]);
    }
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("Reversed value of x and y: \n");
    temp = x;
    x=y;
    y=temp;
    printf("x = %d\ny = %d \n\n\n", x,y);
    return 0;
}



















