#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    float basic, TA, HRA, gross;
};

int main()
{
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter basic salary: ");
    scanf("%f", &e.basic);

    e.TA = 0.23 * e.basic;
    e.HRA = 0.30 * e.basic;

    e.gross = e.basic + e.TA + e.HRA;

    printf("\n----- Employee Details -----\n");
    printf("Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.id);
    printf("Basic Salary: %.2f\n", e.basic);
    printf("TA: %.2f\n", e.TA);
    printf("HRA: %.2f\n", e.HRA);
    printf("Gross Salary: %.2f\n", e.gross);

    return 0;
}
