/*#include <stdio.h>

int main() {
    int year, month;

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("31 days\n");
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("29 days\n");
        } else {
            printf("28 days\n");
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30 days\n");
    } else {
        printf("Invalid month\n");
    }

    return 0;
}*/
#include <stdio.h>

int main() {
    int year, month;

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    int days = (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 31 :
               (month == 4 || month == 6 || month == 9 || month == 11) ? 30 :
               (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) ? 29 : 28;

   
     
        printf("%d days\n", days);
    

    return 0;
}

