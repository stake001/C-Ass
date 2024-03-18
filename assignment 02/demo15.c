#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Handle special cases for January and February
    if (month == 1 || month == 2) {
        month += 12;
        year--;
    }

    // Zeller's congruence algorithm
    int weekday = (day + 26 * (month + 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7;

    // Convert weekday number to day name
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Day of the week: %s\n", days[weekday]);

    return 0;
}

