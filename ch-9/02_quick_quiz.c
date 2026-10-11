#include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[30];
};

int main() {
    struct employee e[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter code of employee %d: ", i + 1);
        scanf("%d", &e[i].code);

        printf("Enter name of employee %d: ", i + 1);
        scanf("%29s", e[i].name);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &e[i].salary);
    }

    printf("\n--- Employee Details ---\n");

    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Code: %d\n", e[i].code);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}
