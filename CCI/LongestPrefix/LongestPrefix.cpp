#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

string largestCommonPrefix(vector<string>& strs){
    string ans = "";
    string s = *min_element(strs.begin(),strs.end());   // returns minimum lenth string
    
    for(int i =0; i<s.size(); i++){
        for(int j =0; j<strs.size();j++){
            if(s[i]!=strs[j][i])
                return ans;
        }
        ans.push_back(s[i]);
    }
    return ans;
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    vector<string> strs;
    int n;
    cin>>n;

    for(int i =0; i<n; i++){
        string s1;
        cin>>s1;
        strs.push_back(s1);
    }

    string ans = largestCommonPrefix(strs);

    cout<<ans;

    return 0;
}