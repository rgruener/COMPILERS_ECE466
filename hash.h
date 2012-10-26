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

struct hashTable * newHashTable();

int insert(struct hashTable *table, char *key, void *pv);

int contains(struct hashTable *table, char *key);

void * getPointer(struct hashTable *table, char *key, int *b);

int setPointer(struct hashTable *table, char *key, void *pv);

int remove(struct hashTable *table, char *key);

int hash(char *key);

int findPos(struct hashTable *table, char *key);

int rehash(struct hashTable *table);

static unsigned int getPrime(int size);

#endif
