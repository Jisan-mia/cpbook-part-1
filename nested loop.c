#include <stdio.h>
/*
int main(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("i = %d  j = %d\n", i,j);

        }

    }
    return 0;
}
*/
int main(){
    int i,j;
    i=0;
    j=0;
    while(i<3){
        while(j<3){
            printf("i=%d j=%d\n", i,j);
            j++;
        }
        i++;
    }
    return 0;
}
