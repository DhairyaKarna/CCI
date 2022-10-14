#include<bits/stdc++.h>

using namespace std;

int countOccurences(int a[], int n, int v, int i){
    if(i==n)
        return 0;

    if(a[i]==v)
        return 1 + countOccurences(a,n,v,i+1);
    
    else
        return countOccurences(a,n,v,i+1);
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

    int ans = countOccurences(a,n,v,0);

    cout<<ans;
    
    return 0;
}