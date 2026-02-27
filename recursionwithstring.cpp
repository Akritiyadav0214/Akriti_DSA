#include<iostream>
using namespace std;
void reverse(string& str,int i,int j){
    cout<<"call received for "<<str<<endl;
    if(i>j)
    return ;
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}

int main(){
    string name="akriti";
    reverse(name,0,name.size()-1);
    cout<<name<<endl;

    return 0;
}