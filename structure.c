#include <stdio.h>
struct Record {
    char id [2];
    char name[10];
    char phone[15];
    char email[15];
};

int main(){
    struct Record a, b;
    int i;

    for(i = 0; i< 2; i++){
    printf("Enter id: ");
    scanf("%s", &a.id);
    printf("Enter name: ");
    scanf("%s", &a.name);
    printf("Enter phone: ");
    scanf("%s", &a.phone);
    printf("Enter email: ");
    scanf("%s", &a.email);
    }
    for(i = 0;i< 2; i++){
        printf("Id: %s, Name: %s, Phone: %s, Email: %s\n",a.id,  a.name, a.phone, a.email);
    }

    return 0;
}
