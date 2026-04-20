/*17. Write a program defining a structure to store the data for a student with fields (roll_no, f_name, l_name, address, mobile_no) and display the record in an appropriate format.*/
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char f_name[50];
    char l_name[50];
    char address[100];
    long long mobile_no;
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    scanf("%*c"); 

    printf("Enter first name: ");
    fgets(s.f_name, sizeof(s.f_name), stdin);
    s.f_name[strcspn(s.f_name, "\n")] = 0; 

    printf("Enter last name: ");
    fgets(s.l_name, sizeof(s.l_name), stdin);
    s.l_name[strcspn(s.l_name, "\n")] = 0; 

    printf("Enter address: ");
    fgets(s.address, sizeof(s.address), stdin);
    s.address[strcspn(s.address, "\n")] = 0;

    printf("Enter mobile number: ");
    scanf("%lld", &s.mobile_no);

    printf("\nStudent Record:\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("First Name: %s\n", s.f_name);
    printf("Last Name: %s\n", s.l_name);
    printf("Address: %s\n", s.address);
    printf("Mobile Number: %lld\n", s.mobile_no);

    return 0;
}