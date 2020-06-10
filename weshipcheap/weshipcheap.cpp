#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;
typedef map<string, string> mss;
typedef map<string, vs> msvs;
typedef map<string, bool> msb;

void printGraph(msvs &graph) {
    for (msvs::iterator itr=graph.begin(); itr!=graph.end(); itr++) {
        string u = itr->first;
        printf("Vertex %s have connection to:\n", u.c_str());
        for (vs::iterator itr2=graph[u].begin(); itr2!=graph[u].end(); itr2++) {
            string v = *itr2;
            printf("-->%s\n", v.c_str());
        }
    }
}


void printAllPath(mss &path) {
    for (mss::iterator itr=path.begin(); itr!=path.end(); itr++) {
        printf("Parent for %s is %s\n", itr->first.c_str(), itr->second.c_str());
    }
}


void printPath(mss &path, string dst) {
    if (path[dst] == "None")
        return;
    printPath(path, path[dst]);
    printf("%s %s\n", path[dst].c_str(), dst.c_str());
}

void BFS(msvs &graph, mss &path, msb &visited, string src, string dst) {
    queue<string> q;
    q.push(src);
    while (!q.empty()) {
        string u = q.front();
        visited[u] = true;
        q.pop();

        for (vs::iterator itr=graph[u].begin(); itr!=graph[u].end(); itr++) {
            string v = *itr;
            if (!visited[v]) {
                path[v] = u;
                if (v == dst) {
                    queue<string> empty;
                    swap(q, empty);
                    break;
                } else {
                    q.push(v);
                }
            }
        }
    }
}

int main() {
    int t;
    scanf("%i", &t);
    for (int i=0; i<t; i++) {
        msvs graph;
        mss path;
        msb visited;
        int E;
        scanf("%i", &E);
        for (int j=0; j<E; j++) {
            string s1, s2;
            cin >> s1 >> s2;
            graph[s1].push_back(s2);
            graph[s2].push_back(s1);
            visited[s1] = false; path[s1] = "None";
            visited[s2] = false; path[s2] = "None";
        }
        int V = graph.size();
        string src, dst;
        cin >> src >> dst;
        printf("Case #%i:\n", i+1);
        //printGraph(graph);
        BFS(graph, path, visited, src, dst);
        //printAllPath(path);
        if (path[dst] == "None")
            printf("No route\n");
        else
            printPath(path, dst);
    }
}
