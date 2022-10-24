#include<bits/stdc++.h>

using namespace std;

//BottomUp
int MaxNonAdjacentSum(int* arr, int n){

    vector<int> dp(n,-1);

    dp[0] = arr[0];
    dp[1] = max(arr[0],arr[1]);

    for(int i =2; i<n; i++){
        int ans1 = arr[i] + dp[i-2];
        int ans2 = dp[i-1];
        dp[i] = max(ans1, ans2);
    }

    return dp[n-1];
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

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int ans = MaxNonAdjacentSum(arr,n);

    cout<<"Max Non Adjacent Sum of Array is: "<<ans;

    return 0;
}