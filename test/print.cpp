#include <iostream>
#include <string.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s;
    cin>>s;
    cout<<"Started Hello "<<s;
    return 0;
}
