#include <stdio.h>

int main(){
    /*
    int ascii;
    for(ascii = 0; ascii<256; ascii++){
        printf("Ascii = %d : %c\n", ascii, ascii);
    }

    char ch = 'f'; //102
    ch = ch-2; //100
    printf("%c\n", ch);

    */

    // Lowercase or uppercase character
    char country[100];

    printf("Enter uppercase character: \n");
    scanf("%s", country);

    int i, length;
    length = 30;
    for(i= 0; i<length; i++){
        if(country[i]>=  && country[i]<=90){
            country[i] = 'a' + (country[i]-'A');
        }
    }
    printf("Lowercase : %s\n", country);


    return 0;
}
