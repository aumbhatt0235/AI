#include <iostream>
#include <vector>

class Node {
    public:
        Node(int l, int w) {
            label = l;
            weight = w;
        }
        int label;
        int weight;
};

void addEdge(vector<Node> matrix[], int label, int weight, int adj) {
    Node newNode = new Node(label, weight);
    matrix[label].push_back();
}