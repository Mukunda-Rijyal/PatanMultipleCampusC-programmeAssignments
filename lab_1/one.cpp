#include <stdio.h>

int main() {

    char name[50];
    char dateOfBirth[50];
    char mobileNumber[50];

    printf("Enter your Name: ");
//    fgets(name, sizeof(name), stdin);
	scanf("%[^\n]s", name);

    printf("Enter your Date of Birth: ");
    scanf("%s", dateOfBirth);

    printf("Enter your Mobile Number: ");
    scanf("%s", mobileNumber);

    printf("\n--- Your Details ---\n");
    printf("Name: %s\n", name);
    printf("Date of Birth: %s\n", dateOfBirth);
    printf("Mobile Number: %s\n", mobileNumber);

    return 0;
}
