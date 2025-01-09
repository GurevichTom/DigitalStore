#include <stdio.h>
#include <stdlib.h>

#include "date.h"

int main() {
    printf("Hello World!\n");
    Date *date = malloc(sizeof(Date));
    init_date(date);
    free(date);
}
