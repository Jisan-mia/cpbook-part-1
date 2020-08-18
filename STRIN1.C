#include <stdio.h>

int main(){
    char str[30];
    int i, length;

    gets(str);
    length = 0;
    for(i=0; str[i]!= '\0' ;i++){
        length = length+1;
    }
    printf("Length of '%s' is %d\n", str, length);




    return 0;
}
