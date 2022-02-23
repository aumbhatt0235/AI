/*
    @aumbhatt0235
    Adjacency Matrix Method using Array of vectors.
*/

#include <iostream>
#include <vector>

void addEdge(int v, int u, std::vector<int> matrix[]) {
    matrix[v].push_back(u);
    matrix[u].push_back(v);
}


int main() {

    int nodes;
    
    std::cout << "\nEnter number of nodes : ";
    std::cin >> nodes;
    
    std::vector<int> m[nodes];
    addEdge(0, 1, m);
    addEdge(4, 1, m);
    addEdge(4, 3, m);
    addEdge(2, 1, m);
    addEdge(2, 3, m);

    for(int i=0; i<nodes;++i) {
        std::cout << i << " : {";
        for(int j=0; j<m[i].size(); ++j)
            std::cout << " " << m[i].at(j);
        std::cout << " } " << std::endl;
    }

    return 0;
}