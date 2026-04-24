#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;  
    char doj[20];  
    float salary;
};


void totalEmployees(int n) {
    printf("\nTotal number of employees: %d\n", n);
}


void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0, i;

    for(i = 0; i < n; i++) {
        if(emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else if(emp[i].gender == 'F' || emp[i].gender == 'f')
            female++;
    }

    printf("Male Employees: %d\n", male);
    printf("Female Employees: %d\n", female);
}


void Salary(struct EMPLOYEE emp[], int n) {
    int i;
    printf("\nEmployees with salary > 10000:\n");

    for(i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s\n", emp[i].name);
        }
    }
}

void asstManager(struct EMPLOYEE emp[], int n) {
    int i;
    printf("\nEmployees with designation 'Asst Manager':\n");

    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "Asst Manager") == 0) {
            printf("%s\n", emp[i].name);
        }
    }
}

int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

   
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee :\n");

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

   
    totalEmployees(n);
    countGender(emp, n);
    Salary(emp, n);
    asstManager(emp, n);

    return 0;
}


