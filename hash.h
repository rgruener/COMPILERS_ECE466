// Robert Gruener
// Compilers ECE466
// hash.h

#ifndef _HASH_H
#define _HASH_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

struct hashItem {
    char *key;
    int isOccupied;
    int isDeleted;
    void *pv;
};

struct hashTable {
    int capacity;
    int filled;
    struct hashItem *data;
};

// Returns pointer to new Hash Table of at least specified size
// returns NULL if memory allocation fails
struct hashTable * newHashTable(int size);

// Insert specified key and pointer into hash table
// returns 0 on success
// returns 1 if key already exists in hash table
// returns 2 if a rehash fails
int hashTable_insert(struct hashTable *table, char *key, void *pv);

// Checks if specified key is in hash table
// returns 1 if true, 0 if false
int hashTable_contains(struct hashTable *table, char *key);

// Returns pointer associated with specified key
// If key doesnt exist, returns NULL
// Sets int b to 1 if key exists, 0 if doesnt exist
void * hashTable_getPointer(struct hashTable *table, char *key, int *b);

// Sets pointer associated with specified key
//  returns 1 on success
//  returns 0 if key does not exist
int hashTable_setPointer(struct hashTable *table, char *key, void *pv);

// Deletes item with specified key from hash table
// returns 1 on success
// returns 0 if key does not exist
int hashTable_remove(struct hashTable *table, char *key);

// hashing function
int hash(struct hashTable *table, char *key);

// returns position of hash item with specified key
// returns -1 if hash item with specified key not found
int hashTable_findPos(struct hashTable *table, char *key);

// rehashes hash table, increasing capacity by factor of 2
int hashTable_rehash(struct hashTable *table);

// returns prime number at least as large as size
static unsigned int getPrime(int size);

#endif
