#include <stdio.h>

int main(){
    char str[30] = "BANGLA", str_new[30];
    int i, j;
    for(i=5,j=0; i>=0;i--){
        str_new[j] = str[i];
        j++;
    }
    str_new[j] = '\0';
    printf("%s", str_new);
    return 0;
}
