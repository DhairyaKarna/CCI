#include<bits/stdc++.h>

using namespace std;

int sumOfDigits(int n){

    //Base Case
    if(n==0)
        return 0;

    //Recursive
    int smallOutput = sumOfDigits(n/10);

    //Calculation
    return (n % 10) + smallOutput;

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

    int ans = sumOfDigits(n);

    cout<<ans;

    return 0;
}