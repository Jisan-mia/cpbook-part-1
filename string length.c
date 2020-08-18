#include <stdio.h>
int string_lenght(char str[]){
    int i=0, length=0;
    while(str[i] != '\0'){
        length++;
        i++;
    }

    return length;
}
int main(){
    char ara[30];
    int length;
    while (NULL!=gets(ara)){
        length = string_lenght(ara);
        printf("length: %d\n", length);
    }
    return 0;
}
