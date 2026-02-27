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
bool checkpalindrome(string name,int i,int j){
    if(i>j)
    return true ;
    if(name[i]!=name[j])
    return false;
    else{
    return checkpalindrome(name,i+1,j-1);
    }
}
int main(){
    string name="abcde";
    cout<<endl;
    bool ispalindrome=checkpalindrome(name ,0,name.size()-1);
    if(ispalindrome){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }
    return 0;
}