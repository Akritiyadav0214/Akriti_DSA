#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int digit(int n,int c){
     
int x=n;
    while(c>=0){
    int a=x%10;
    int  x=x/10;
    c++;
    }
    return c;
}

 
 vector<int> arm(int& n,int& m,vector<int>&ans){

  int i;
  int sum=0;
  int c=0;
    while(i>=n&&i<=m){
  
     int a=i%10;
     int i=i/10;
    int b= digit(i,c);
      sum=pow(a,b)+sum;
      if(sum==i){
       ans.push_back(i);
      }
    
    }
    return ans;
 }


int main(){
    int n ,m;
    cout<<"Enter the range";
    cin>>n;
    cout<<"enter the upper range";
    cin>>m;
    vector<int>ans;
    vector<int>out;
  out=arm(n,m,ans);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
   return -1;
}