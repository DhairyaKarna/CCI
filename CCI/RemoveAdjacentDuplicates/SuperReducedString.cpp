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

    stack<char> st;

    for(int i =0; i<s.size();i++){
        if(st.empty() || s[i]!=st.top()){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }

    string ans ="";

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());

    cout<<ans;

    return 0;
}