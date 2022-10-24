#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//TopDown
int minArrayJumpsTD(int* arrjumps, int* memo, int n, int i){
    if(i>=n-1)
        return 0;
    else if(memo[i+1]!=0)
        return memo[i+1];
    else{
        int jumps = arrjumps[i];
        int ans = INT_MAX;

        for(int j =1; j<=jumps; j++){
            int currentAns = minArrayJumpsTD(arrjumps, memo, n, i+j);
            ans = min(ans, currentAns);
        }
        memo[i+1] = ans+1;
        return memo[i+1];
    }
}

//BottomUp
int minArrayJumpsBU(int arrjumps[], int n){
    
    vector<int> dp(n+1,INT_MAX);

    dp[n] = 0;

    for(int i=n-1; i>0; i--){
        int jump = arrjumps[i-1];
        int ans = INT_MAX;
        for(int j=1; j<=jump;j++){
            if(i+j>n)
                break;
            ans = min(dp[i],dp[i+j]);
        }
        dp[i] = ans+1;
    }
    return dp[1];
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
    
    int arrjumps[n];
    for(int i =0; i<n; i++){
        cin>>arrjumps[i];
    }

    int memo[n+1] = {0};

    int ans1 = minArrayJumpsTD(arrjumps, memo, n, 0);

    cout<<"Min number of jumps TD: "<<ans1<<endl;

    int ans2 = minArrayJumpsBU(arrjumps,n);

    cout<<"Min number of jumps BU: "<<ans2<<endl;
    
    return 0;
}