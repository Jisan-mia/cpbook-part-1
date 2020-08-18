#include <stdio.h>

int main(){
    char country[] = {'B', 'a', 'n', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    //printf("%s\n", country);
    char str[] = "Bangladesh is my country";
    //printf("%s\n", str);
    char *str1 = "I love Bangladesh.\n";
    //printf("%s", str);
    char str2[30];
    //scanf("%[^\n]", str2);
    //printf("%s", str2);
    gets(str2);
    //puts(str2);
    printf("%s", str2);
    return 0;
}
