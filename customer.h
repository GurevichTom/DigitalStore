//
// Created by Tom on 29.12.2024.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "shopping_cart.h"

#define ID_LEN 9

typedef struct {
    char id[ID_LEN], *name;
    ShoppingCart shopping_cart;
} Customer;

#endif //CUSTOMER_H
