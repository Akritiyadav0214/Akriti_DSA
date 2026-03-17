#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reductance(string  str,stack<int> &s){
    for(int i=0;i<str.size();i++){
       char ch=str[i];
       if(ch=='('||ch=='+'||ch=='-'||ch=='/'||ch=='*'){
         s.push(ch);
    }
    else{
        while(ch!='('){
            if(s.top()=='+'||s.top()=='-'||s.top()=='/'||s.top()=='*'){
                
            }
        }
    }
}
}
int main(){
 string str="((a+b)*(c-d))";
 stack<int>s;
}