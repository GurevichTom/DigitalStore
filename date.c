//
// Created by Tom on 29.12.2024.
//

#include "date.h"

#include <stdio.h>
#include <stdlib.h>

int init_date(Date *date) {

    printf("Please enter the date: \n");
    scanf("%2d%2d%4d", &date->day, &date->month, &date->year);

    int leftover_char = getchar();

    if (leftover_char != '\n' && leftover_char != EOF) {
        printf("invalid input, too many chars");
        while (leftover_char != '\n' && leftover_char != EOF) {
            leftover_char = getchar();
        }
        return 0;
    }

    if (date->year < 2024 || date->year > 2030) {
        printf("invalid year\n");
        return 0;
    }

    if (date->month > 12 || date->month < 1) {
        printf("invalid month\n");
        return 0;
    }

    const char* invalid_day_msg = "invalid day\n";
    if (date->day < 1 || date->day > 31) {
        printf(invalid_day_msg);
        return 0;
    }

    if (date->month == 2 && date->day > 28) {
        printf(invalid_day_msg);
        return 0;
    }

    if ((date->month == 4 || date->month == 6 ||
         date->month == 9 || date->month == 11) && date->day > 30) {
        printf(invalid_day_msg);
        return 0;
    }

    return 1;
}
