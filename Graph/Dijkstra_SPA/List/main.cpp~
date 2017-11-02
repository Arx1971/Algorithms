#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

struct node{
	int at,cost;
	node(int at,int cost) {
		this->at = at;
		this->cost = cost;
	}
};
bool operator<(node A,node B){
	return A.cost > B.cost;
}
struct edge{
	int v,w;
};

vector<edge>g[100];
priority_queue<node>pq;
int dist[1000];
int n;

void dijkstra(int src){
	
	dist[src] = 0;
	pq.push(node(src,0));
	while(!pq.empty()){
		node u = pq.top();
		pq.pop();
		//if(u.cost != dist[u.at]) continue;
		
		for(edge e: g[u.at]){
			if(dist[e.v] > u.cost + e.w){
				dist[e.v] = u.cost + e.w;
				pq.push(node(e.v,dist[e.v]));
			}
		}
	}	
}

int main(){
	
	freopen("input.txt", "r", stdin);
	
	int i,j,k,l;
	int e;

	cin >> n >> e;
	for(int i=0; i<=n; i++) dist[i] = INT_MAX;

	for(int i=0; i<=n ;i++) g[i].clear();
	edge temp;
	for(int i=0; i<e; i++){
		cin >> i >> j >> k;
		temp.v = j;
		temp.w = k;
		g[i].push_back(temp);
	}
	dijkstra(1);
	for(int i=2; i<=n; i++){
		cout << "1 -> " << i << " : " << dist[i] << endl;
	}
	
	return 0;
}
