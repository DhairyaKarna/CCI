#include <iostream>
#include <string>

using namespace std;

void reverseString(string& s){
    int n = s.size();
    for(int i =0, j=n-1; i<=j; i++,j--){
        swap(s[i],s[j]);
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