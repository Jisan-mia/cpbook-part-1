#include <stdio.h>

int main(){
    char str[30];
    int i, length;
    length = 0;
    gets(str);
    for(i=0; str[i] != '\0'; i++){
        length = length+1;
    }
    for(i=length; i >= 0 ; i--){
        printf("%c", str[i-1]);
    }
    printf("\n");

    return 0;
}
