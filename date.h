//
// Created by Tom on 29.12.2024.
//

#ifndef DATE_H
#define DATE_H

typedef struct {
    int day, month, year;
} Date;

int init_date(Date *date);
#endif //DATE_H
