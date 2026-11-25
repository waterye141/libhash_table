#include "hash_table.h"

static t_item *CreateHashItem(const char *k, const char *v) {
  t_item *node = malloc(sizeof(t_item));
  if (!node)
    return (NULL);
  node->key = strdup(k);
  node->value = strdup(v);
  return (node);
}

HashTable *CreateHashTable(void) {
  HashTable *ht = malloc(sizeof(HashTable));
  if (!ht)
    return (NULL);
  ht->size = 64;
  ht->count = 0;
  ht->table = calloc(sizeof(t_item *), (size_t)ht->size);
  return (ht);
}
