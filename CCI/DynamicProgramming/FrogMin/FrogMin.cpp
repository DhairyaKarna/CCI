#include<bits/stdc++.h>

using namespace std;

//TopDown
int FrogMinTD(int* stone, int i, int n, vector<int>& memo){

    if(i==n-1){
        return 0;
    }

    if(i>=n)
        return INT_MAX;

    if(memo[i]!=-1)
        return memo[i];

    int ans1 = FrogMinTD(stone, i+1, n, memo);
    int ans2 = FrogMinTD(stone, i+2, n, memo);

    if(ans1<ans2)
        memo[i] = abs(stone[i]-stone[i+1]) + ans1;
    else
        memo[i] = abs(stone[i]-stone[i+2]) + ans2;

    return memo[i];
}

//BottomUp

int FrogMinBU(int * stone, int n){

    vector<int> dp(n,-1);

    dp[0] = 0;
    dp[1] = abs(stone[1]-stone[0]);

    for(int i =2; i<n; i++){
        int ans1 = abs(stone[i]-stone[i-1]) + dp[i-1];
        int ans2 = abs(stone[i]-stone[i-2]) + dp[i-2];
        dp[i] = min(ans1, ans2);
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

    int stone[n];
    for(int i =0; i<n; i++){
        cin>>stone[i];
    }

    vector<int> memo(n,-1);

    int ans = FrogMinTD(stone, 0, n, memo);

    cout<<"Frog Min Cost by TD: "<<ans<<endl;

    int ans1 = FrogMinBU(stone, n);

    cout<<"Frod Min Cost by BU: "<<ans1;

    return 0;

}