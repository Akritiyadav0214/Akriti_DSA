#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int> &s,int x){
    if(s.empty() || s.top()<=x){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    sortedInsert(s,x);
    s.push(temp);
}
void sortStack(stack<int> &s){
    if(!s.empty()){
        int x=s.top();
        s.pop();
        sortStack(s);
        sortedInsert(s,x);
    }
}
int main(){
    stack<int> s;
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);
    sortStack(s);
    cout<<"Sorted numbers are:\n";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}