#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<bool> vb;
typedef priority_queue<ii, vii, greater<ii>> pq_min;

vvii graph;
vi path;

void addEdge(int u, int v, int w) {
    graph[u].push_back({v, w});
    graph[v].push_back({u, w});
}

void printGraph() {
    for (int i=0; i<graph.size(); i++) {
        printf("Vertex %i have connections:\n", i);
        for (int j=0; j<graph[i].size(); j++) {
            printf("To vertex %i with weight %i\n", graph[i][j].first, graph[i][j].second);
        }
    }
}

void BFS(int src) {
    queue<int> q;
    vb visited(graph.size(), false);
    q.push(src);
    visited[src] = true;
    while (!q.empty()) {
        // Get the first element in queue, then pop and print it.
        int v = q.front();
        q.pop();
        printf("%i ", v);
        // For every neighbor, push it into the queue
        for (vii::iterator itr=graph[v].begin(); itr!=graph[v].end(); itr++) {
            int vertex = itr->first;
            if (!visited[vertex]) {
                q.push(vertex);
                visited[vertex] = true;
            }
        }
    }
    printf("\n");
}

void DFSProcess(queue<int> &q, vb &visited, int v) {
    // For every neighbor, push it into the queue, and find its neighbor again until there is no (unvisited) neighbor anymore
    for (vii::iterator itr=graph[v].begin(); itr!=graph[v].end(); itr++) {
        int vertex = itr->first;
        if (!visited[vertex]) {
            // Push the neighbor into the queue
            q.push(vertex);
            visited[vertex] = true;
            // Repeat, get the neighbor of neighbor
            DFSProcess(q, visited, vertex);
        }
    }
}

void DFS(int src) {
    queue<int> q;
    vb visited(graph.size(), false);
    q.push(src);
    visited[src] = true;
    while (!q.empty()) {
        // Get the first element in queue, then pop and print it.
        int v = q.front();
        q.pop();
        printf("%i ", v);
        // Real DFS here
        DFSProcess(q, visited, v);
    }
    printf("\n");
}

int MST(int src) {
    vb visited(graph.size(), false);
    path.assign(graph.size(), -1);
    pq_min pq;

    pq.push({src, 0});

    int mst_cost = 0;

    while (!pq.empty()) {
        int w = pq.top().first;
        int v = pq.top().second;
        pq.pop();

        if (visited[v])
            continue;

        mst_cost += w;
        //printf("MST Cost added by %i\n", w);
        visited[v] = true;

        for (vii::iterator itr=graph[v].begin(); itr!=graph[v].end(); itr++) {
            int vertex = itr->first;
            int weight = itr->second;
            //printf("Neighbor %i with weight %i\n", vertex, weight);
            if (!visited[vertex]) {
                pq.push({weight, vertex});
                path[vertex] = v;
            }
        }
    }
    return mst_cost;
}

void printMST() {
    for (int i=0; i<path.size(); i++) {
        printf("Parent of %i is %i\n", i, path[i]);
    }
}

int main() {
    int V = 5;
    graph.resize(V, vii());
    addEdge(0, 1, 5);
    addEdge(0, 2, 6);
    addEdge(0, 4, 3);
    addEdge(1, 2, 2);
    addEdge(1, 4, 1);
    addEdge(2, 3, 4);
    BFS(0);
    DFS(0);
    printGraph();
    printf("MST Cost is: %i\n", MST(0));
    printMST();
    return 0;
}
