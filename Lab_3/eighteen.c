/*18. Write a program defining a union to store the data for a student with fields (roll_no, f_name, l_name, address, mobile_no). Illustrate the property of unions by accessing only one data member at a time.*/
#include <stdio.h>
#include <string.h>
union Student {
    int roll_no;
    char f_name[50];
    char l_name[50];
    char address[100];
    long long mobile_no;
};
int main() {
    union Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Roll Number: %d\n", s.roll_no);

    printf("Enter first name: ");
    scanf("%s", s.f_name);
    printf("First Name: %s\n", s.f_name);

    printf("Enter last name: ");
    scanf("%s", s.l_name);
    printf("Last Name: %s\n", s.l_name);

    printf("Enter address: ");
    scanf("%s", s.address);
    printf("Address: %s\n", s.address);

    printf("Enter mobile number: ");
    scanf("%lld", &s.mobile_no);
    printf("Mobile Number: %lld\n", s.mobile_no);

    return 0;
}