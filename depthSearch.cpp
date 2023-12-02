#include <iostream>

#include "Graph.h"

int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    std::cout << "DFS from vertex 0:\n";
    graph.depthFirstSearch(0);
    std::cout << "\n";
    return 0;
}