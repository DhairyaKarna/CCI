#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    cout<<n<<endl;
    if(n==0) return 1;

    int smallAns = factorial(n-1);
    return n*smallAns;
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int n;
    cin>>n;

    int ans  = 0 ;
    if(n>0){
        int ans = factorial(n);
        cout<<ans;
    }
    else
        cout<<"No factorial for negative numbers";
    return 0;
}