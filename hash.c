// Robert Gruener
// Compilers ECE466
// hash.c

#include "hash.h"

struct hashTable * hashTable_new(int size){
    if (size <= 0){
        size = getPrime(size);
    }
    struct hashTable *table;
    if ((table = malloc(sizeof(struct hashTable))) == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        return NULL;
    }
    table->capacity = size;
    table->filled = 0;
    if ((table->data = calloc(table->capacity, sizeof(struct hashItem))) == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        return NULL;
    }
    int i;
    for (i=0; i<table->capacity; i++){
        table->data[i].isOccupied = 0;
    }
    return table;
}

int hashTable_insert(struct hashTable *table, char *key, void *pv){
    int index = hash(table, key);
    if (table->filled >= table->capacity / 2){
        if (hashTable_rehash(table) == 0){
            return 2;
        }
    }
    while (table->data[index].isOccupied){
        if (!strcmp(table->data[index].key, key) && !table->data[index].isDeleted){
            return 1;
        }
        if (index + 1 >= table->capacity){
            index = 0;
        } else {
            index++;
        }
    }
    table->data[index].isOccupied = 1;
    table->data[index].isDeleted = 0;
    table->data[index].key = malloc(sizeof(char)*strlen(key));
    strcpy(table->data[index].key, key);
    table->data[index].pv = pv;
    table->filled++;
    return 0;
}

int hashTable_contains(struct hashTable *table, char *key){
    if (hashTable_findPos(table, key) == -1){
        return 0;
    }
    return 1;
}

void * hashTable_getPointer(struct hashTable *table, char *key, int *b){
    int index = hashTable_findPos(table, key);
    if (index == -1){
        if (b != NULL){
            *b = 0;
        }
        return NULL;
    }
    if (b != NULL){
        *b = 1;
    }
    return table->data[index].pv;
}

int hashTable_setPointer(struct hashTable *table, char *key, void *pv){
    int index = hashTable_findPos(table, key);
    if (index == -1){
        return 1;
    }
    table->data[index].pv = pv;
    return 0;
}

int hashTable_remove(struct hashTable *table, char *key){
    int index = hashTable_findPos(table, key);
    if (index == -1){
        return 0;
    }
    table->data[index].isDeleted = 1;
    return 1;
}

int hash(struct hashTable *table, char *key){
    int i, hashVal = 0;
    for (i=0; i<strlen(key); i++){
        hashVal = 37 * hashVal + key[i];
    }
    hashVal %= table->capacity;
    if (hashVal < 0){
        hashVal += table->capacity;
    }
    return hashVal;
}

int hashTable_findPos(struct hashTable *table, char *key){
    int index = hash(table, key);
    while (table->data[index].isOccupied){
        if (!strcmp(table->data[index].key, key) && !table->data[index].isDeleted){
            return index;
        }
        if (index+1 >= table->capacity){
            index = 0;
        } else {
            index++;
        }
    }
    return -1;
}

int hashTable_rehash(struct hashTable *table){
    int old_data_size = table->capacity;
    struct hashItem *old_data;
    if ((old_data = calloc(table->capacity, sizeof(struct hashItem))) == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        return 0;
    }
    memcpy(old_data, table->data, sizeof(struct hashItem)*table->capacity);
    table->capacity = getPrime(table->capacity * 2);
    if (realloc(table->data, sizeof(struct hashItem)*table->capacity) == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        return 0;
    }
    int i;
    for (i=0; i<table->capacity; i++){
        table->data[i].isOccupied = 0;
    }

    table->filled = 0;
    for (i=0; i<old_data_size; i++){
        if (old_data[i].isOccupied && !old_data[i].isDeleted){
            hashTable_insert(table, old_data[i].key, old_data[i].pv);
            table->filled++;
        }
    }
    return 1;
}

int hashTable_print(struct hashTable *table){
    int i;
    for (i=0; i<table->capacity; i++){
        if (table->data[i].isOccupied && !table->data[i].isDeleted){
            printf("%s\n", table->data[i].key);
        }
    }
    return 1;
}

static unsigned int getPrime(int size){
    const int primes[] = {24593, 49157, 98317, 196613, 393241, 786433, 1572869, 3145739, 6291469, 1252829, 25165843};
    int i;
    for (i=0; i<sizeof(primes); i++){
        if (primes[i] >= size){
            break;
        }
    }
    return primes[i];
}
