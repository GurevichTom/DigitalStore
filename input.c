//
// Created by Tom on 29.12.2024.
//

#include <stdio.h>
#include "input.h"

#include <stdlib.h>
#include <string.h>


char* getUserInputString() {
    char buffer[MAX_STR_INPUT];
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Error getting input\n");
        return NULL;
    }

    buffer[strcspn(buffer, "\n")] = '\0';
    const size_t len = strlen(buffer);

    char* back = malloc((len+1) * sizeof(char));
    if (back == NULL) {
        printf("Error allocating memory for input string\n");
        return NULL;
    }

    strcpy(back, buffer);
    return back;
}
