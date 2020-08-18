#include <stdio.h>

int main(){
/*
    int ara1[]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i,j;
    for(i= 0,j=9; i<10; i++,j--){
        ara2[j]= ara1[i];
    }
    for(i=0;i<10;i++){
        ara1[i]= ara2[i];
    }
    for(i=0;i<10;i++){
        printf("%d th element is: %d\n", i+1, ara1[i]);
    }
*/
    int ara[]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;
    for(i=0, j=9;i<10;i++, j--){
        temp = ara[j];
        ara[j]= ara[i];
        ara[i] = temp;
    }
    for(i=0;i<10;i++){
        printf("%d\n", ara[i]);
    }


    return 0;
}
