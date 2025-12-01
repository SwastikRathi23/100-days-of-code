//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    char monthName[4];
    if (month[0] == '0' && month[1] == '4') {
        monthName[0] = 'A';
        monthName[1] = 'p';
        monthName[2] = 'r';
        monthName[3] = '\0';
    } else {
     
        monthName[0] = month[0];
        monthName[1] = month[1];
        monthName[2] = '\0';
    }

    printf("Formatted date: %s-%s-%s\n", day, monthName, year);

    return 0;
}