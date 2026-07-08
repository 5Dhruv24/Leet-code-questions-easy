# include<iostream>
# include<string>
using namespace std;

int main(){
    int a;
    cin>>a;
    int l=to_string(a).length();
    string s= to_string(a);
    for(int i=1;i<l-1;i++){
            if(s[i-1]!=s[l-i]){
                cout<<"Not a palindrome number"<<endl;
                return 0;
            }
            
    }
    cout<<"Palindrome number"<<endl;
    return 0;
}