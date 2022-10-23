#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//TopDown
int rodCuttingTD(int N,  int* price, int* memo){
    if(N<=0)
        return 0;
    if(memo[N]!=0)
        return memo[N];
    int maxi = INT16_MIN;
    for(int i = 0; i<N; i++){
        int ans = rodCuttingTD(N-1-i, price, memo) + price[i];
        maxi = max(maxi, ans);
    }
    memo[N] = maxi;
    return memo[N];
}

//BottomUp
int rodCuttingBU(int* price, int N){

    vector<int> dp(N+1,-1);

    dp[0] = 0;

    for(int i = 1; i<N+1; i++){
        
        int maxi = INT_MIN;

        for(int j = 0; j<i; j++){
            int cut = j+1;
            int currentAns = price[j] + dp[i-cut];
            maxi = max(maxi, currentAns);
        }
        dp[i] = maxi;
        
    }

    return dp[N];
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
    
    int price[n];
    for(int i=0; i<n; i++)
        cin>>price[i];

    int N;
    cin>>N;

    int memo[N+1] = {0};

    int ans1 = rodCuttingTD(N,price,memo);

    cout<<"Max Value for rod of length with TD "<<N<<" is "<<ans1<<endl;

    int ans2 = rodCuttingBU(price, N);

    cout<<"Max Value for rod of length with BU "<<N<<" is "<<ans2<<endl;

    return 0;
}