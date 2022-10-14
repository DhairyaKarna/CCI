#include<bits/stdc++.h>

using namespace std;

void countOccurences(int a[], int n, int v, int i, int& ans){
    if(i==n)
        return;

    if(a[i]==v)
        ans++;
    
    countOccurences(a,n,v,i+1,ans);
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

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int v;
    cin>>v;

    int ans = 0;
    countOccurences(a,n,v,0,ans);

    cout<<ans;
    
    return 0;
}