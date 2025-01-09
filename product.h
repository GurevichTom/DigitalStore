//
// Created by Tom on 29.12.2024.
//

#ifndef PRODUCT_H
#define PRODUCT_H

#include "date.h"

#define NAME_LEN 20
#define BARCODE_LEN 7

typedef enum {Shelf, Frozen, Fridge, FruitVegtable, NofTypes} ProductType;
const char* typeTitle[NofTypes] = {"SH", "FZ", "FR", "FV"};

typedef struct {
  char name[NAME_LEN];
  char barcode[BARCODE_LEN];
  ProductType type;
  float price;
  int amount;
  Date expiration_date;
} Product ;


#endif //PRODUCT_H
