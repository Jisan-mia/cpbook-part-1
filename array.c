#include <stdio.h>

int main(){
    int a, b, c;
    int n[3];
    int i;
    for(i= 0;i<3; i++){
        scanf("%d", &n[i]);
    }


    for(i = 0; i<3; i++){
        printf("Roll : %d\n", n[i]);
    }

    return 0;
}
