/*
    @aumbhatt0235
    Weighted-Edge Adjacency Matrix Method using 2D Array.
*/
#include <iostream>

void addEdge(int m, int n, int weight, int **matrix) {
    matrix[m][n] = weight;
}

void printMatrix(int dim, int **matrix) {
    std::cout << "\nMatrix : \n";
    for(int i=0; i<dim; ++i) {
        std::cout << std::endl << i << " : {"; 
        for(int j=0; j<dim; ++j)
            std::cout << " " << matrix[i][j];
        std::cout << " }";
    }
}


int main() {

    int nodes;
    std::cout << "\nEnter no. of nodes : ";

    std::cin >> nodes;

    int *m[nodes];
    for(int i=0; i<nodes; ++i)
        m[i] = new int[nodes];

    // Initializing the matrix with zeroes.
    for(int i=0; i<nodes; ++i) 
        for(int j=0; j<nodes; ++j)
            m[i][j] = 0;
    
    addEdge(0, 1, 6, m);
    addEdge(4, 1, 5, m);
    addEdge(4, 3, 7, m);
    addEdge(2, 1, 3, m);
    addEdge(2, 3, 2, m);

    printMatrix(nodes, m);

    return 0;
}
