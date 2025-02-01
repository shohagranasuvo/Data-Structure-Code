#include <iostream>
#include <vector>
using namespace std;

bool dfs(int curr, int destination, const vector<vector<int>> &graph, vector<bool> &visited, vector<int> &route) {
    visited[curr] = true;
    route.push_back(curr);
    if (curr == destination)
        return true;
    for (int next : graph[curr]) {
        if (!visited[next]) {
            if (dfs(next, destination, graph, visited, route))
                return true;
        }
    }
    route.pop_back();
    return false;
}

int main() {
    int junctions, paths;
    cout << "Please  Enter the number of junction: ";
    cin >> junctions;
    cout << " Please Enter the number of paths: ";
    cin >> paths;

    vector<vector<int>> maze(junctions);
    cout << "Enter each path as two junction numbers (0-indexed):" << endl;
    for (int i = 0; i < paths; i++) {
        int u, v;
        cin >> u >> v;
        maze[u].push_back(v);
        maze[v].push_back(u);
    }

    int start, exitJunction;
    cout << "Enter the starting junction: ";
    cin >> start;
    cout << "Enter the exit junction: ";
    cin >> exitJunction;

    vector<bool> visited(junctions, false);
    vector<int> route;
    if (dfs(start, exitJunction, maze, visited, route)) {
        cout << "DFS traversal sequence to reach the exit: ";
        for (int junction : route)
            cout << junction << " ";
        cout << endl;
    } else {
        cout << "The exit junction " << exitJunction << " is not reachable from the starting point." << endl;
    }

    return 0;
}
