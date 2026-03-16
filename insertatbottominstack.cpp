#include<iostream>
#include<stack>
using namespace std;

    void solve(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return ;
    }
    int top=st.top();
    st.pop();
    solve(st,x);
    st.push(top);
  }

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    int x=0;
    solve(st,x);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
