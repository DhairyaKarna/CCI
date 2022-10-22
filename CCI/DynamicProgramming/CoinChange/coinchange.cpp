#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//Recursive Approach
int coinChangeRecursive(int c[], int n, int target){
    if(target==0){
        return target;
    }
    if(target>0){
        int mini = INT_MAX;
        for(int i =0; i<n; i++){
            if(target-c[i]>=0){
                int ans = coinChangeRecursive(c, n, target-c[i]);
                mini= min(mini, ans+1);
            }
        }
        return mini;
    }
}

//TopDown Approach
int coinChangeTD(int* c, int n, int target, int* m){
    if(target==0)
        return 0;
    else if(m[target]!=0)
        return m[target];
    else if(target>0){
        int mini = INT16_MAX;
        for(int i = 0; i<n; i++){
            if(target-c[i]>=0){
                int ans = coinChangeTD(c, n, target-c[i],m);
                mini = min(mini, ans+1);
            }
        }
        m[target] = mini;
        return mini;
    }
}

//Bottom Up
int coinChangeBU(int* c, int n, int target){
    
    vector<int> m(target+1,-1);

    m[0] = 0;

    for(int i =1; i<target+1; i++){
        int mini = INT16_MAX;
        for(int j =0; j<n; j++){
            if(i-c[j]>=0){
                if(m[i-c[j]]==0){
                    mini=1;
                }
                else{
                    if(mini>m[i-c[j]]){
                        mini = m[i-c[j]]+1;
                    }
                }
            }
        }
        m[i] = mini;
    }
    
    return m[target];
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

    int c[n];

    for(int i =0; i<n; i++){
        cin>>c[i];
    }
    
    int target;
    cin>>target;

    int ans1 = coinChangeRecursive(c,n,target);

    cout<<"Min Coins by Recursion : "<<ans1<<endl;

    int m[target+1] = {0};

    int ans2 = coinChangeTD(c,n,target,m);

    cout<<"Min Coins by TD: "<<ans2<<endl;

    int ans3 = coinChangeBU(c, n, target);

    cout<<"Min Coins by BU: "<<ans3<<endl;

    return 0;
}