#include <stdio.h>
int minimum(int a, int b){
    int temp;
    if(a<b){
        temp = a;
    }
    else{
        temp = b;
    }
    return temp;
}
int main(){
    int a, b, c, t1, t2;
    scanf("%d%d%d", &a, &b, &c);
    t1 = minimum(a,b);
    t2 = minimum(t1, c);
    printf("The smaller number is %d", t2);
    return 0;

}
