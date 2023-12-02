#ifndef GRAPH
#define GRAPH

#include <iostream>
#include <vector>
#include <queue>


class Graph {
private:
    int vertices;
    std::vector<std::vector<int>> adjacencyLists;
    std::vector<bool> isVisited;

public:
    Graph(int V);
    void addEdge(int source, int destination);
    void depthFirstSearch(int vertex);
    void breadthFirstSearch(int vertex);
};

Graph::Graph(int vert) : vertices(vert), adjacencyLists(vert), isVisited(vert, false) {}

void Graph::addEdge(int src, int dest) {
    adjacencyLists[src].push_back(dest);
}

void Graph::depthFirstSearch(int vx) {
    isVisited[vx] = true;
    std::vector<int>& adjList = adjacencyLists[vx];

    std::cout << vx << " ";

    for (int neighbor : adjList) {
        if (!isVisited[neighbor]) {
            depthFirstSearch(neighbor);
        }
    }
}

void Graph::breadthFirstSearch(int vertex) {
  isVisited = std::vector<bool>(vertices, false);

  std::queue<int> bfsQueue;

  isVisited[vertex] = true;
  bfsQueue.push(vertex);

  while (!bfsQueue.empty()) {
    int currentVertex = bfsQueue.front();
    std::cout << currentVertex << " ";
    bfsQueue.pop();

    for (int adjacentVertex : adjacencyLists[currentVertex]) {
      if (!isVisited[adjacentVertex]) {
        isVisited[adjacentVertex] = true;
        bfsQueue.push(adjacentVertex);
      }
    }
  }
  std::cout << "\n";
}


#endif