#include<bits/stdc++.h>

using namespace std;

//Find number of BST with N Nodes

//Recursion
int trees(int n){
    if(n==0 or n==1)   
        return 1;
    
    int ans = 0;
    for(int i = 1; i<=n; i++){
        int x = trees(i-1);
        int y = trees(n-i);
        ans += x*y;
    }
    return ans;
}

//TopDown
int treesTD(int n, int* memo){
    if(n==0 or n==1)
        return 1;
    if(memo[n]!=0)
        return memo[n];
    int ans =0;
    for(int i = 1; i<=n; i++){
        int x = treesTD(i-1, memo);
        int y = treesTD(n-i, memo);
        ans += x*y;
    }
    memo[n] = ans;
    return memo[n];
}

//BottomUp
int treesBU(int n){

    vector<int> dp(n+1,0);

    dp[0] = dp[1] = 1;

    for(int i =2; i<=n; i++){
        for(int j =1; j<=i; j++){
            dp[i] += dp[j-1]*dp[i-j];
        }
    }

    return dp[n];
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

    int memo[n+1] = {0};

    int ans = trees(n);

    cout<<"Number of BST with node "<<n<<" are "<<ans<<endl;

    int ans1 = treesTD(n,memo);

    cout<<"Number of BST by TD with node "<<n<<" are "<<ans1<<endl;

    int ans2 = treesBU(n);

    cout<<"Number of BST by BU with node "<<n<<" are "<<ans2<<endl;

    return 0;
}