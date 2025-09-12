#include<iostream>
#include<list> 
using namespace std; 

//first create a adjancency matrix represenentation of graph 

class Graph{
    int v;
    list<int> *l; 

    public:
    Graph(int v){
     this->v=v; 
     l=new list<int>[v];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
};
