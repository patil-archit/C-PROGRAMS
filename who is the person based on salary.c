#include <stdio.h>

int main() {
    printf("Enter the salary: ");
    int salary;
    scanf("%d", &salary);

    (salary >= 25000 && salary <= 40000) ? printf("The person is a manager\n") :
    (salary >= 15000 && salary <= 25000) ? printf("The person is an accountant\n") :
    (salary < 15000) ? printf("Are you ridiculous? Nobody works for that much\n") :
    printf("Invalid salary range\n");

    return 0;
}

