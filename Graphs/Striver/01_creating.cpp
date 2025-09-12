#include<iostream>
#include<vector> 
#include<list> 
using namespace std; 

-----------------------------------------Revision on Sunday----------------------------------------------
int main(){
    //ADJMATRIX 
    int n,m; 
    cin>>n>>m;

    // int adj[n+1][n+1]; -> note it is not adj[n][m];


    vector<vector<int>> adj(n+1, vector<int>(n+1, 0));

    for(int i=0;i<m;i++){
        int u,v; 
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1; //undirected //o(n2) space compelxity is used not used more 
    }


    






    //{adjList} 
    int node;  //n
    int edges; ///m 

    vector<int> adj(n+1);
        for(int i=0;i<m;i++){
        int u,v; 
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); //undirected

        //directed graph 
        adj[u].push_back(v); //only one edge tc(o(e));
    }


    //weighted graph 
   int n, m;
    cin >> n >> m;

    // adjacency list for weighted graph
    vector<pair<int,int>> adj[n+1];  // adj[node] = {neighbor, weight}

    for(int i = 0; i < m; i++) {
        int u, v, w;   // use w for weight
        cin >> u >> v >> w;

        adj[u].push_back({v, w});  // u → v with weight w
        adj[v].push_back({u, w});  // v → u with weight w (undirected)
    }

    


    return 0;
}