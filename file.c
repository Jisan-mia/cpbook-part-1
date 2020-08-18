#include <stdio.h>

int main(){
    FILE *ouput_file;
    ouput_file = fopen("file.txt", "w");//we can read and write from / to a external txt file..

    char input[80];

    gets(input);
    fputs(input, ouput_file);

    return 0;
}
