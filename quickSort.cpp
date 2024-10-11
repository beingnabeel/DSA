#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int dest, weight;
};

// Function to implement Prim's algorithm
vector<int> primMST(vector<vector<Edge>>& graph, int V) {
    vector<int> parent(V, -1);     // Store the parent of each vertex in the MST
    vector<int> key(V, INT_MAX);   // Store the key (minimum weight) of each vertex
    vector<bool> inMST(V, false);  // Keep track of vertices included in MST

    // Custom comparator for priority queue (min-heap)
    class Compare {
    public:
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        }
    };

    // Priority queue to store vertices and their corresponding key values
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    // Start with vertex 0 as the root
    int root = 0;
    pq.push(make_pair(root, 0));
    key[root] = 0;

    while (!pq.empty()) {
        int u = pq.top().first;
        pq.pop();

        inMST[u] = true;

        for (const auto& edge : graph[u]) {
            int v = edge.dest;
            int weight = edge.weight;

            if (inMST[v] == false && weight < key[v]) {
                parent[v] = u;
                key[v] = weight;
                pq.push(make_pair(v, key[v]));
            }
        }
    }

    return parent;
}

// Function to display the minimum spanning tree
void printMST(const vector<int>& parent, const vector<vector<Edge>>& graph) {
    cout << "Minimum Spanning Tree:" << endl;
    for (int i = 1; i < parent.size(); i++) {
        cout << parent[i] << " -- " << i << "  Weight: " << graph[i][parent[i]].weight << endl;
    }
}

int main() {
    // Number of vertices in the graph
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    // Number of edges in the graph
    int E;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Create the graph as an adjacency list
    vector<vector<Edge>> graph(V);

    cout << "Enter source, destination, and weight for each edge:" << endl;
    for (int i = 0; i < E; i++) {
        int src, dest, weight;
        cin >> src >> dest >> weight;

        // Add edges to both vertices since the graph is undirected
        graph[src].push_back({ dest, weight });
        graph[dest].push_back({ src, weight });
    }

    vector<int> parent = primMST(graph, V);

    printMST(parent, graph);

    return 0;
}
// output
// Enter the number of vertices: 4
// Enter the number of edges: 5
// Enter source, destination, and weight for each edge:
// 0 1 10
// 0 2 6
// 0 3 5
// 1 3 15
// 2 3 4
// Minimum Spanning Tree:
// 0 -- 1  Weight: 10
// 3 -- 2  Weight: 17045696
// 0 -- 3  Weight: 5