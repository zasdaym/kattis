#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef priority_queue< ii, vii, greater<ii> > pq_min;

vvii graph;

// Function to print vertex and edges with weight
void printGraph() {
    for (int i=0; i<graph.size(); i++) {
        printf("Node %i connected to:\n", i);
        for (auto itr : graph[i]) {
            printf("  -> %i with weight %i\n", itr.first, itr.second);
        }
        printf("\n");
    }
}

//Function to print djikstra path
void printDjikstraPath(vi parent, int dst) {
    if (parent[dst] == -1) {
        printf("%d ", dst);
        return;
    }
    printDjikstraPath(parent, parent[dst]);
    printf("%d ", dst);
}

// Djikstra algorithm
void djikstra(vvii graph, int src) {
    vb visited(graph.size(), false);
    vi distance(graph.size(), INT_MAX);
    pq_min pq;
    vi parent(graph.size(), -1);
    pq.push({0, src});
    distance[src] = 0;
    while (!pq.empty()) {
        int w = pq.top().first;
        int v = pq.top().second;
        pq.pop();

        for (auto itr=graph[v].begin(); itr!=graph[v].end(); itr++) {
            int vertex = itr->first;
            int weight = itr->second;
            if (distance[vertex] > distance[v] + weight) {
                parent[vertex] = v;
                distance[vertex] = distance[v] + weight;
                pq.push({distance[vertex], vertex});
            }
        }
    }

    // Print shortest cost to every vertex
    //printf("Vertex\tDistance from source\tPath\n");
    //for (int i=0; i<graph.size(); i++) {
    //    printf("%d \t\t %d \t\t ", i, distance[i]);
    //    printDjikstraPath(parent, i);
    //    printf("\n");
    //}
    int dst = graph.size()-1;
    if (parent[dst] == -1)
        printf("-1");
    else
        printDjikstraPath(parent, graph.size()-1);
    printf("\n");
}

int main() {
    int t;
    scanf("%i", &t);
    for (int i=0; i<t; i++) {
        int n, m;
        scanf("%i %i", &n, &m);
        graph.assign(m, vii());
        int x, y, z;
        while (n--) {
            scanf("%i %i %i", &x, &y, &z);
            //printf("%i connect to %i\n", x, y);
            graph[x].push_back({y, z});
            graph[y].push_back({x, z});
        }
        printf("Case #%i:\n", i+1);
        //printGraph();
        djikstra(graph, 0);
    }
    return 0;
}
