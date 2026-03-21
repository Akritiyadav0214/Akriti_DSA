#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution{
    public:
    string reverseWords(string s){
        vector<string> words;
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(word!=""){
                    words.push_back(word);
                    word="";
                }
            }
            else{
                word+=s[i];
            }
        }
        if(word!=""){
            words.push_back(word);
        }
        string result="";
        for(int i=words.size()-1;i>=0;i--){
            result+=words[i];
            if(i!=0){
                result+=' ';
            }
        }
        return result;
    }

};
int main(){
    solution s;
    string str="Hello World";
    cout<<s.reverseWords(str)<<endl;
    return 0;
}