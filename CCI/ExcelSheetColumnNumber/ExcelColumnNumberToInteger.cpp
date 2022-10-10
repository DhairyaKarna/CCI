#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>

using namespace std;

int titleToNumber(string s){
    int ans = 0;
    long long pow = 1;
    int n = s.size();
    for(int i =n-1; i>=0; i--){
        ans = ans + (s[i]-64)*pow;
        pow = pow*26;
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

    string s;
    cin>>s;
    
    int ans = titleToNumber(s);

    cout<<ans;

    return 0;
}
