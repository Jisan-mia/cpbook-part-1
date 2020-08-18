#include <stdio.h>

int main(){
    double c, f;
    printf("Enter Farenheight: ");
    scanf("%lf", &f);
    c = (f-32)*1.8;
    printf("%0.2lf degree farenheight = %0.2lf degree celcius", f, c);
}
