#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>

using namespace std;

const int N = 1000;

vector < int > graph[N];
int level[N];
bool visited[N];
int parent[N];

void bfs(int src){
	
	int u,v;
	
	for(int i=0; i<N; i++)
		visited[i] = false;
		
	queue < int > q;
	q.push(src);
	visited[src] = true;
	level[src] = 0;
	
	while(!q.empty()){
		
		u = q.front();
		q.pop();
		
		for(int j=0; j<graph[u].size(); j++){
			
			v = graph[u][j];
			
			if(visited[v] == false){
			
				visited[v] = true;
				level[v] = level[u] + 1;
				parent[v] = u;
				q.push(v);
			
			}
		
		}
	
	}
	
}
void printPath(int src, int dest)
{
    if(dest == src)
    {
        cout << dest;
        return;
    }

    printPath(src, parent[dest]);
    cout << " -> " << dest;
}

int main(){
	
	freopen("input.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int node,a;
	cin >> node;
	
	for(int i=1; i<=node; i++){
		
		cin >> a;	// number of edge;
		graph[i].resize(a);
		
		for(int j=0; j<a; j++)
			cin >> graph[i][j];
			
	}
	bfs(1);
	cout << "Distance Is: " << level[node] << endl;
	printPath(1,node);
	cout << endl;

}

