#include <stdio.h>

int main(){
    char name[3][10] = {"subeen", "rafi", "wasi"};
    int i;

    for(i = 0; i< 3;i++){
        printf("%s\n", name[i]);
    }
    return 0;
}
