/*7. Write a program using an array of structures to store the data for 10 employees with fields (e_sn, f_name, l_name, address, mobile_no) and display the records in an appropriate format.*/
#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 10
struct Employee {
    int e_sn;
    char f_name[50];
    char l_name[50];
    char address[100];
    char mobile_no[15];
};
int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int i;

    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Serial Number: ");
        scanf("%d", &employees[i].e_sn);
        printf("First Name: ");
        scanf("%s", employees[i].f_name);
        printf("Last Name: ");
        scanf("%s", employees[i].l_name);
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Mobile Number: ");
        scanf("%s", employees[i].mobile_no);
    }

    printf("\nEmployee Records:\n");
    printf("SN\tFirst Name\tLast Name\tAddress\t\tMobile No\n");
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("%d\t%s\t\t%s\t\t%s\t%s\n", employees[i].e_sn, employees[i].f_name, employees[i].l_name, employees[i].address, employees[i].mobile_no);
    }

    return 0;
}