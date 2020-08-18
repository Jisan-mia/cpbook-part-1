#include <stdio.h>

double celToFar(double c){
    double f = c*1.8 + 32;
    return f;
}

int main(){
    double celcius,farenheight;
    printf("Enter Celcius : " );
    scanf("%lf", &celcius);
    farenheight = celToFar(celcius);
    printf("%0.2lf degree celcius = %0.1lf degree farenheight", celcius, farenheight);
    return 0;
}
