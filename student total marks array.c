#include <stdio.h>

int main(){
    int ft_marks[100], st_marks[100], final_marks[100];
    int size, i;
    printf("Enter the length of your student: ");
    scanf("%d", &size);
    printf("Enter all the student marks of First Exam: \n ");
    for(i = 0; i<size;i++){
        scanf("%d", &ft_marks[i]);
    }
    printf("Enter all the student marks of Second Exam: \n");
    for(i = 0; i<size;i++){
        scanf("%d", &st_marks[i]);
    }
    printf("Enter all the student marks of final Exam: \n");
    for(i = 0; i<size;i++){
        scanf("%d", &final_marks[i]);
    }
    double total_marks[40];
    for(i=0;i<size;i++){
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }
    for(i=1;i<=size;i++){
        printf("\nRoll no: %d\t Total Marks: %0.0lf\n", i, total_marks[i-1]);
    }
    int marks, count;
    printf("\nThis is how many times same marks got the students\n ");
    for(marks =30;marks<=100;marks++){
        count = 0;
        for(i=0; i<40;i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
        if(count>=1 ){
            printf("\nMarks: %d\t Count: %d\n",marks, count);
        }
    }
    return 0;
}
