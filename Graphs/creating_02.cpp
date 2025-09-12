#include<iostream>
#include<list> 
using namespace std; 
class Graph{
    int V; 
    list<int> *L;
    // int * arr; 
    public: 
    Graph(int v){
        this->V=v; 
        L=new list<int> [v];
        //  arr=new arr[];
    }
    //edge Connection //bidirectional
    void addEdge(int u, int v){
        L[u].push_back(v);
        L[v].push_back(u);
    }
    //traversal
    void traversal(){
        for(int i=0;i<V;i++){
            cout<<i<<" ";
            for(int neigh:L[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph obj(5);
    obj.addEdge(0,1);
    obj.addEdge(1,3);
    obj.addEdge(1,2);
    obj.addEdge(2,3);
    obj.addEdge(2,4);
    obj.traversal();
    return 0;
}