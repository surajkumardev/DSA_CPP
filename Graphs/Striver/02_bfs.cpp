#include<iostream>
#include<vector> 
#include<list> 
#include<queue> 
using namespace std; 



vector<int> bfsTraversal(vector<int> adj){
    int vis[n]={0}; 
    vis[0]=1; 

    queue<int> q; 
    q.push(0); 
    vector<int> bfs; 
    while(!q.empty()){
        int node=q.front(); 
        q.pop(); 
        bfs. push_back(node); 

        //now the list of vector attached at each index 
        for(auto it: adj[node]){ //every index par ek list ya vector hai 
            if(!vis[it]){
                vis[it]=1; 
                q.push(it);
            }
        }
    }
    return bfs; 
}

tc-> 
sc-> O(3n)-> n


vector<int>  main(){
    int n=19;
    int vis[n]={0}; 
    vis[0]=1; 

    queue<int> q; 
    q.push(0); 
    vector<int> bfs; //answer; 
    while(q.size()>0){
        int node=q.front(); 
        q.pop(); 
        bfs.push_back(node); 

        //now check all the ajs list at a particular index 
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1; 
                q.push(it); 
            }
        }

    }
    return bfs; 


}
