#include <iostream>
#include <fstream>
#include <queue>
#include <vector>

using namespace std;

vector<int> bfs(const vector<vector<int> >&graph, int start_vertex) {
    int n = graph.size();
    vector<int> distances(n, -1);
    queue<int> q;

    distances[start_vertex] = 0;
    q.push(start_vertex);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current]) {
            if (distances[neighbor] == -1) {
                distances[neighbor] = distances[current] + 1;
                q.push(neighbor);
            }
        }
    }
    return distances;
}

int main() {
    ifstream fin_graph("graph.txt");
    if (!fin_graph.is_open()) {
        cerr << "Error with open file!" << endl;
        return 1;
    }

    int count_vertex, count_edge;
    fin_graph >> count_vertex >> count_edge;

    vector<vector<int> > graph(count_vertex);

    for (int i = 0; i < count_edge; ++i) {
        int start_edge, end_edge;
        fin_graph >> start_edge >> end_edge;
        graph[start_edge].push_back(end_edge);
        graph[end_edge].push_back(start_edge);
    }

    int start_vertex;
    fin_graph >> start_vertex;

    fin_graph.close();

    vector<int> distances = bfs(graph, start_vertex); 

    for (int i = 0; i < count_vertex; ++i) {
        cout << distances[i] << endl;
    }
    
    return 0;
}