#include<bits/stdc++.h>

using namespace std;

int sumArray(int a[], int n){

    //Base Case
    if(n==1){
        return a[0];
    }

    //Recursion
    int smallSum = sumArray(a+1,n-1);

    //Calculation
    int sum = a[0]+smallSum;
    return sum;
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

    int a[n];

    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    int ans = sumArray(a, n);

    cout<<ans;
    
    return 0;
}