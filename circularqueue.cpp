#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int f,r;
    int currSize,cap;
public:
    CircularQueue(int size) {
        cap=size;
        arr=new int[cap];
        currSize=0;
        f=0;
        r=-1;
    }
    void push(int data){
if(currSize==cap){
            cout<<"Queue is full"<<endl;
            return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currSize++;
    }
    void pop(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f=(f+1)%cap;
        currSize--;
    }
    bool isempty(){
        return currSize==0;
    }
    int front(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
};
int main(){
    CircularQueue q(4);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50); // Queue is full
    
    return 0;
}