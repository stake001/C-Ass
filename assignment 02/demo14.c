#include <stdio.h>
#include <string.h>

#define MAX_DEPARTMENTS 4  // Maximum number of departments

struct Department {
    int dept_no;
    char dept_name[20];
};

struct Designation {
    char code;
    char designation[20];
};

int main() {
    int emp_id, dept_no;
    char desig_code;

    struct Department departments[MAX_DEPARTMENTS] = {
        {10, "Marketing"},
        {20, "Management"},
        {30, "Sales"},
        {40, "Designing"}
    };

    struct Designation designations[MAX_DEPARTMENTS] = {
        {'M', "Manager"},
        {'S', "Supervisor"},
        {'s', "Security Officer"},  // Case-insensitive matching for 's'
        {'C', "Clerk"}
    };

    printf("Enter Employee Id: ");
    scanf("%d", &emp_id);

    printf("Enter Department No: ");
    scanf("%d", &dept_no);

    printf("Enter Designation Code: ");
    scanf(" %c", &desig_code); // Read with a space to avoid issues with whitespace

    // Find department and designation using loops
    int dept_found = 0, desig_found = 0;
    for (int i = 0; i < MAX_DEPARTMENTS; i++) {
        if (departments[i].dept_no == dept_no) {
            dept_found = 1;
            break;
        }
    }

    for (int i = 0; i < MAX_DEPARTMENTS; i++) {
        if (designations[i].code == desig_code) {
            desig_found = 1;
            break;
        }
    }

    if (!dept_found) {
        printf("Invalid department number.\n");
    } else if (!desig_found) {
        printf("Invalid designation code.\n");
    } else {
        // Print output if both department and designation are valid
        printf("Employee with employee id %d is working in \"%s\" department as \"%s\".\n",
               emp_id, departments[dept_no - 10].dept_name, designations[desig_code - 'M'].designation);
    }

    return 0;
}

