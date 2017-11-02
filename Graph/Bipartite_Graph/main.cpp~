#include <iostream>
#include <queue>
#include <cstdio>
#include <ctime>

using namespace std;

const int n = 1000;
vector < int > g[n];
bool visited[n];
int color[n];

bool isBipartite(int src){
	
	color[src] = 1;
	queue < int > q;
	q.push(src);
	visited[src] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int i=0; i<g[u].size(); i++){
			int v = g[u][i];
			if(color[i] == -1){
				color[i] = 1 - color[u];
				q.push(i);
			}
			else if (color[i]==color[u]) return false;
		}
	}
	return true;
}

int main(){
	freopen("input.txt","r",stdin);
	int node,edge;
	cin >> node >> edge;
	for(int i=0; i<node; i++){
		color[i] = -1;
	}
	int n1,n2;
	for(int i=0; i<edge; i++){
		cin >> n1 >> n2;
		g[n1].push_back(n2);
		g[n2].push_back(n1);
	}
	if(isBipartite(0)) cout << "This Is Bipartite Graph: " << endl;
	else cout << "This is not Bipartite Graph: " << endl;
}






