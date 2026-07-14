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
    int L=1000;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='I' or s[i]=='i'){
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
        else if(s[i]=='V' or s[i]=='V'){
            n=n+V;
        }
        else if(s[i]=='X' or s[i]=='x'){
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
        else if(s[i]=='L' or s[i]=='l'){
            n=n+50;
        }
        else if(s[i]=='C' or s[i]=='c'){
            else if(s[i+1]=='C'){
                n=n-+C;
                i=i+1;
                continue;
            }
            else{
                n=n+C;
            }
        }
        else if(s[i]=='D' or s[i]=='d'){
            n=n+500;
        }
        else if(s[i]=='M' or s[i]=='m'){
            n=n+1000;
        }
        /* code */
    }
    
    return n;
 }


int main(){
    string s;
    cout<<"Enter the roman number:-",cin>>s,cout<<endl;
    
    cout<<"Integer form of the given roman number is:-"<<romantointeger(s);
    return 0;
}