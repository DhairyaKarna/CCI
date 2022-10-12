#include<bits/stdc++.h>

using namespace std;

//Given two number m and n find m*n

int multiplication(int m, int n){

    //Base Case
    if(n==0)
        return 0;
    
    //Recursive Step
    int smallOutput = multiplication(m,n-1);

    //Calculation
    return m + smallOutput;

}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int m, n;
    cin>>m>>n;

    int ans = multiplication(m,n);

    cout<<ans;

    return 0;
}