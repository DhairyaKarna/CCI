#include<bits/stdc++.h>

using namespace std;

int power(int x, int n){
    //Base case
    if(n==0){
        return 1;
    }

    //Recursive case
    int smallOutput = power(x,n-1);

    //Calculation
    return x*smallOutput;
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int x, n;
    cin>>x>>n;

    int ans  = power(x,n);

    cout<<ans;

    
    return 0;
}