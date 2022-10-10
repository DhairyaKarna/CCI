#include<string>
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

class Pair{
    public:
        char first; //stores the character
        int second;//stores the count of the character
    Pair(char f, int s){
        first = f;
        second = s;
    }
};

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    string s;
    int k;
    cin>>s;
    cin>>k;

    stack<Pair> st;

    for(int i =0; i<s.size();i++){
        if(st.empty() || s[i]!=st.top().first){
            //Push a pair
            Pair p(s[i],1);
            st.push(p);
        }
        else{
            //A[i] is the top element
            st.top().second++;
            int count  = st.top().second;
            if(count==k)
                st.pop();
        }
    }

    string ans ="";

    while(!st.empty()){
        int count  = st.top().second;
        while(count--){
            ans.push_back(st.top().first);
        }
        st.pop();
    }

    reverse(ans.begin(),ans.end());

    cout<<ans;

    return 0;
}