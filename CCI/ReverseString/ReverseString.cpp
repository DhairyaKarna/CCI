#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

void reverseString(string& s){
    stack<char> st;
    for(char c : s){
        st.push(c);
    }
    for(int i =0; i<s.size(); i++){  //stack size is not constant so can't use st.size()
        s[i]=st.top();
        st.pop();
    }
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    string s;
    getline(cin, s);

    reverseString(s);

    cout<<s;

    return 0;
}