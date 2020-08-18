#include <stdio.h>

int string_compare(char a[], char b[]){
    int i,j;
    for(i= 0; a[i] != '\0' && b[i] != '\0'; i++){

        if(a[i]<b[i]){
            return -1;
        }
        if(a[i]>b[i]){
            return 1;
        }
        if(a[i] == b[i]){
            return 0;
        }
    }
}
int main(){
    char a[50], b[50];
    printf("Enter 1st string: \n");
    gets(a);
    printf("Enter 2nd string; \n");
    gets(b);
    int compare= string_compare(a, b);
    printf("%d", compare);
    return 0;
}
