#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

///https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    string s;
    cin>>s;

    int stptr = -1;

    for(int i =0; i<s.size();i++){
        if(stptr==-1 || s[i]!=s[stptr]){
            stptr++;
            s[stptr] = s[i];
        }
        else{
            stptr--;
        }
    }

    string ans ="";

    for(int i =0; i<=stptr; i++){
        ans.push_back(s[i]);
    }

    cout<<ans;

    return 0;
}