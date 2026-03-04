#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,E;
   
    cout<<"Enter the no of vertices";
    cin>>N;
    cout<<"Enter the no of edge ";
    cin>>E;
    vector<int>AdjList[N];
    for(int i=0;i<=E;i++){
        cout<<"Enter the end point of edge"<<i<<":";
        int a,b;
    cin>>a>>b;
    AdjList[a].push_back(b);
    AdjList[b].push_back(a);
    }
    for(int i=0;i<N;i++){
        cout<<i<<":";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j]<<",";
        }
        cout<<endl;
    }
}