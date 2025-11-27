#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp, emp_read;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fp = fopen("employee.dat", "wb");   
    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    fwrite(&emp, sizeof(emp), 1, fp);   
    fclose(fp);

    printf("\nEmployee data written to binary file.\n");

    fp = fopen("employee.dat", "rb");   
    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(emp_read), 1, fp); 
    fclose(fp);

    printf("\n--- Employee Data Read From File ---\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);

    return 0;
}
