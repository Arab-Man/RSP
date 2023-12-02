#include <iostream>
#include <vector>

void addEdge(std::vector<int> List[], int n, int v) {
  List[n].push_back(v);
  List[v].push_back(n);
}

void print(std::vector<int> adjList[], int V) {
  for (int d = 0; d < V; ++d) {
    std::cout << "\n Vertex " << d << ":";
    for (auto x : adjList[d])
      std::cout << "-> " << x;
    printf("\n");
  }
}

int main() {
  int V = 5;

  std::vector<int> adjList[V];

  addEdge(adjList, 0, 1);
  addEdge(adjList, 0, 2);
  addEdge(adjList, 1, 2);
  addEdge(adjList, 1, 3);
  print(adjList, V);

  return 0;
}
