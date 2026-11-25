#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdlib.h>
#include <string.h>

typedef struct item {
  char *key;
  char *value;
} t_item;

typedef struct table {
  size_t size;
  int count;
  t_item **table;
} HashTable;

#endif // HASH_TABLE_H
