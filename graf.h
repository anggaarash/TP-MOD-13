#ifndef GRAF_H_INCLUDED
#define GRAF_H_INCLUDED
#include <iostream>

using namespace std;

#define first(L) ((L).first)
#define nil NULL

typedef char infotype;
typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode child;
    adrNode next;
};

struct Graph{
    adrNode first;
};

void createList_1301210567(Graph &G);
adrNode newNode_1301210567(char x);
void addNode_1301210567(Graph &G, adrNode p);
adrNode findNode_1301210567(Graph G, char x);
void addEdge_1301210567(Graph &G, char x, char y);
bool isConnected_1301210567(Graph G, char x, char y);
void printGraph_1301210567(Graph G);

#endif // GRAF_H_INCLUDED
