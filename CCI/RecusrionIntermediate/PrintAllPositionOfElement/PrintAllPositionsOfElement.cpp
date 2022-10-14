#include<bits/stdc++.h>

using namespace std;

void printAllPositions(int a[],int n,int i, int v){
    
    //Base Case
    if(i==n)
        return;
    
    if(a[i]==v){
        cout<<"Element present at index = "<<i<<endl;
    }

    printAllPositions(a,n,i+1,v);
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

    for(int i =0; i<n; i++)
        cin>>a[i];

    int v;
    cin>>v;

    printAllPositions(a,n,0,v);
    
    return 0;
}