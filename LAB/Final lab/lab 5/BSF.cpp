#include <bits/stdc++.h>
using namespace std;


void dfs(int node, unordered_map<int, bool>& visited, vector<int>& component, unordered_map<int, list<int>>& adj) {
    component.push_back(node);
    visited[node] = true;

    for (auto neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, component, adj);
        }
    }
}

// Build adjacency list from edge list
void buildAdjList(unordered_map<int, list<int>>& adj, vector<vector<int>>& edges) {
    for (const auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

// Find all connected components using DFS
vector<vector<int>> depthFirstSearch(int V, vector<vector<int>>& edges) {
    unordered_map<int, list<int>> adj;
    buildAdjList(adj, edges);

    vector<vector<int>> result;
    unordered_map<int, bool> visited;

    for (int i = 1; i <= V; i++) { // Assuming 1-based indexing
        if (!visited[i]) {
            vector<int> component;
            dfs(i, visited, component, adj);
            result.push_back(component);
        }
    }
    return result;
}

int main() {
    // Edge list
    vector<vector<int>> edges = {{1, 2}, {1, 4}, {2, 3}, {2, 5}, {2, 6}, {5, 7}, {4, 6}, {6, 7}, {5, 9}, {9, 8}, {6, 9}, {5, 3}};

    // Number of vertices (max node value in edges)
    int V = 9;

    
    vector<vector<int>> components = depthFirstSearch(V, edges);

    // Output the components
    for (const auto& component : components) {
        for (const auto& node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
