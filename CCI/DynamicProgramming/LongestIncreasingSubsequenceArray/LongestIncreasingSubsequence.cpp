#include<bits/stdc++.h>

using namespace std;

//BottomUp
int LongestIncreasingSubsequence(int n, int* arr){

    vector<int> dp(n,-1);

    dp[0]= 1;

    for(int i = 1; i<n; i++){
        if(arr[i]<arr[i-1])
            dp[i]=dp[i-1];
        else
            dp[i]=dp[i-1]+1;
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

    int ans = LongestIncreasingSubsequence(n, arr);

    cout<<"Longest Increasing Subsequence Length is: "<<ans;

    return 0;
}