#include <iostream>
#include "graf.h"

using namespace std;

int main()
{
    cout << "===================================" << endl;
    Graph G;
    createList_1301210567(G);

    addNode_1301210567(G, newNode_1301210567('A'));
    addNode_1301210567(G, newNode_1301210567('B'));
    addNode_1301210567(G, newNode_1301210567('C'));
    addNode_1301210567(G, newNode_1301210567('D'));

    addEdge_1301210567(G, 'A', 'C');
    addEdge_1301210567(G, 'A', 'D');
    addEdge_1301210567(G, 'A', 'B');

    addEdge_1301210567(G, 'B', 'A');
    addEdge_1301210567(G, 'B', 'D');

    addEdge_1301210567(G, 'C', 'A');

    addEdge_1301210567(G, 'D', 'B');
    addEdge_1301210567(G, 'D', 'A');

    printGraph_1301210567(G);

    return 0;
    return 0;
}
