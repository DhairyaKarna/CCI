#include<bits/stdc++.h>

using namespace std;

// Calculate nth Fibonacci Number

int fibonacci(int n){
    //base case
    if(n==0 || n==1)
        return n;
    
    
    //recursive case
    int smallOutput1 = fibonacci(n-1);
    int smallOutput2 = fibonacci(n-2);

    // caluclation
    return smallOutput1+smallOutput2;
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

    int ans = fibonacci(n);

    cout<<ans;

    return 0;
}