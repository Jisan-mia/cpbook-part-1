#include <stdio.h>
int main(){
    int marks;
    char grade;
    printf("Enter you mark : \n");
    scanf("%d", &marks);
    if(marks>100){
        printf("Not a Mark");
    }
    else if(marks>=80){
        printf("You grade is A+");
    }
    else if(marks>=70){
        grade= 'A';
        printf("You grade is %c\n", grade);
    }
    else if(marks>=60){
        printf("You grade is A-");
    }
    else if(marks>=50){
        grade= 'B';
        printf("You grade is %c\n", grade);
    }
    else if(marks>=40){
        grade= 'C';
        printf("You grade is %c\n", grade);
    }
    else if(marks>=33){
        grade= 'D';
        printf("You grade is %c\n", grade);
    }
    else if(marks<0){
        printf("%d is not a valid marks\n",marks);
    }
    else{
        printf("You grade is F");
    }
    return 0;
}
