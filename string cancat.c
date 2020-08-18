#include <stdio.h>
// string concatenation
/*
int main(){
    char a[30]= "Bangla", b[30] = "desh";
    int i,j,length;
    length = 6;
    for(i= length, j = 0; b[j]!= '\0'; i++,j++){
        a[i] = b[j];
    }
    a[i] = '\0';
    printf("%s\n", a);
    return 0;

}
*/
// string concatenation by taking input from user and then concated them-->
int main(){
    char a[30], b[30];
    printf("Enter first part of the string: \n");
    gets(a);
    printf("\nEnter second part of the string: \n");
    gets(b);
    int i, j, length =0;
    for(i=0; a[i] != '\0'; i++){
        length = length+1;
    }
    for(i = length, j = 0; b[j] != '\0'; i++, j++){
        a[i] = b[j];
    }
    a[i] = '\0';
    printf("Total part of the string is '%s'\n", a);



    return 0;
}
