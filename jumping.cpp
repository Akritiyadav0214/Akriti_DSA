#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number";
    cin>>x;
    vector<int>ans;
    int i=0;
    int b;
    while(i<=x){
        int z=i;
        int a=z%10;
         int c=z/10;
         if(c/10!=0){
         b=z%10; 
         }
        if((a-b)==1){
            ans.push_back(i);
        }
        i++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}