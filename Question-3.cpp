# include<iostream>
#include<string>
using namespace std;



 int romantointeger(string s){
    int n=0;
    int I=1;
    int V=5;
    int X=10;
    int L=50;
    int C=100;
    int D=500;
    int M=1000;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='I' ){
            if (s[i+1]=='V'){
                n=n+V-I;
                i=i+1;
                continue;
            }
            else if(s[i+1]=='X'){
                n=n-I+X;
                i=i+1;
                continue;
            }
            else{
                n=n+I;
            }
        }
        else if(s[i]=='V'){
            n=n+V;
        }
        else if(s[i]=='X' ){
            if (s[i+1]=='L'){
                n=n-X+L;
                i=i+1;
                continue;}
            
            else if(s[i+1]=='C'){
                n=n-X+C;
                i=i+1;
                continue;
            }
            else{
                n=n+X;
            }
            
        }
        else if(s[i]=='L' ){
            n=n+50;
        }
        else if(s[i]=='C' ){
            if(s[i+1]=='D'){
                n=n-C+D;
                i=i+1;
                continue;
            }
            else if(s[i+1]=='M'){
                n=n-C+M;
                i=i+1;
                continue;
            }
            else{
                n=n+C;
            }
        }
        else if(s[i]=='D' ){
            n=n+D;
        }
        else if(s[i]=='M' ){
            n=n+M;
        }
        
    }
    
    return n;
 }


int main(){
    string s;
    cout<<"Enter the roman number:-",cin>>s,cout<<endl;
    
    cout<<"Integer form of the given roman number is:-"<<romantointeger(s);
    return 0;
}