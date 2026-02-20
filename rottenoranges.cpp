#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
// pair<int,string>p;
// // p={101,"akriti"};
// p=make_pair(101,"akriti");
// cout<<p.first<<",";
// cout<<p.second;

// vector<pair<int,string>>vp;
// vp.push_back({1,"akriti"});
// vp.push_back({12,"ak"});
// vp.push_back({13,"akr"});
// vp.push_back({18,"akri"});
// vp.push_back({14,"akrit"});
// for(int i=0;i<vp.size();i++){
//     pair<int,string>p;
//     p=vp[i];
//     cout<<p.first<<","<<p.second<<"\n";
// }
queue<pair<int,int>>q;
q.push({0,5});
q.push({1,4});
q.push({2,3});
q.push({3,2});
q.push({4,1});
q.push({5,0});
while(!q.empty()){
    pair<int,int>p;
    p=q.front();
    q.pop();
    cout<<p.first<<","<<p.second<<"\n";
}

    return 0;
}