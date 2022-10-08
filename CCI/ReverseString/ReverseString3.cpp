#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    string s;
    getline(cin,s);

    reverse(s.begin(),s.end());
    cout<<s;
    
    return 0;
}