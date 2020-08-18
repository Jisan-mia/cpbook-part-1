#include <stdio.h>

int main(){
    char str[30], str_new[30];
    int i, j, length;
    length = 0;
    gets(str);
    for(i=0; str[i] != '\0'; i++){
        length = length+1;
    }
    for(i=length, j=0; i >= 0 ; i--){
        str_new[j] = str[i-1];
        j++;
    }
    str_new[j] = '\0';
    printf("%s\n", str_new);

    return 0;
}
