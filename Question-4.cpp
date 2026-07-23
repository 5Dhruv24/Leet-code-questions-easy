# include<iostream>
#include<string>

using namespace std;

string longestprefix(){
    string pre;
    string strs[3]={"flower","flow","flight"};
    for (int i = 0; i < sizeof(strs[0]); i++)
    {
        string w=strs[0];
        string nw=strs[1];
        if (w[i]==nw[i])
        {
            pre=pre+w[i];

        }
        
    }
    for (int i = 0; i < sizeof(strs); i++)
    {
        string word=strs[i];
        if (word.find(pre))
        {
            continue;
        }
        else{
            for (int j = 0; j < sizeof(pre); j++)
            {
                pre=pre.erase(pre.length()-1);
                if (word.find(pre))
                {
                break;
                }
            }
            
        }
    }
    
    
    return pre;
}

int main(){
    string arr[2]={"hello","hee"};
    cout<<longestprefix();
    return 0;
}