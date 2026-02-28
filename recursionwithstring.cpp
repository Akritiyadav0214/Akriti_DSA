#include<iostream>
using namespace std;
// void reverse(string& str,int i,int j){
//     cout<<"call received for "<<str<<endl;
//     if(i>j)
//     return ;
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);
// }

// int main(){
//     string name="abcd";
//     reverse(name,0,name.size()-1);
//     cout<<name<<endl;

//     return 0;
// }
// bool checkpalindrome(string name,int i,int j){
//     if(i>j)
//     return true ;
//     if(name[i]!=name[j])
//     return false;
//     else{
//     return checkpalindrome(name,i+1,j-1);
//     }
// }
// int main(){
//     string name="abcde";
//     cout<<endl;
//     bool ispalindrome=checkpalindrome(name ,0,name.size()-1);
//     if(ispalindrome){
//         cout<<"string is palindrome";
//     }
//     else{
//         cout<<"string is not palindrome";
//     }
//     return 0;
// }
// bubble sort
void sortArray(int *arr,int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}
int main(){
int arr[4]={5,4,3,2};
sortArray(arr,4);
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";

}
return 0;
}