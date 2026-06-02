#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;
class graph{
public:
 unordered_map<int,list<int>>adj;
 void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
        
 }

};
int main(){  
    
    return 0;
}