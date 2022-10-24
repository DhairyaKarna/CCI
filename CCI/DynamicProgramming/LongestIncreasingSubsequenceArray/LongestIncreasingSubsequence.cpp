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

//Video Approach

int LIS(int* arr, int n){

    vector<int> dp(n,1);

    int len = 1;

    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i], dp[j]+1);
                len = max(len, dp[i]);
            }
        }
    }
    return len;
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

    cout<<"Longest Increasing Subsequence Length is: "<<ans<<endl;

    int ans1 = LIS(arr, n);

    cout<<"Longest Increasing Subsequence Length by Video is: "<<ans1;

    return 0;
}