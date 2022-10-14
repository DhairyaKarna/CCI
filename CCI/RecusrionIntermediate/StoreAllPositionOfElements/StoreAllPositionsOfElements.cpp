#include<bits/stdc++.h>

using namespace std;

//Vector Implementation
void storePositions(int a[], int n, int v, int i, vector<int>& ans){

    if(i==n)
        return;

    if(a[i]==v)
        ans.push_back(i);

    storePositions(a,n,v,i+1,ans);
}

//Array Implementation
//It uses array as output and also count the number of occurences
//so that we can find the size of array as vector has v.size() but array doesn't have anything like that
int storePositions2(int a[], int n, int v, int i, int ans[], int j){

    if(i==n)
        return 0;

    if(a[i]==v){
        ans[j]=i;
        return 1 + storePositions2(a,n,v,i+1,ans,j+1);
    }

    return storePositions2(a,n,v,i+1,ans,j);
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

    for(int i =0; i<n ; i++)
        cin>>a[i];
    
    int v;
    cin>>v;

    vector<int> ans;

    storePositions(a,n,v,0,ans);

    cout<<"Vector Implementation : "<<endl;
    for(int i : ans)
        cout<<i<<" ";

    int ans2[10];

    int size = storePositions2(a,n,v,0,ans2,0);

    cout<<endl<<"Array Implementation: "<<endl;

    for(int i=0; i<size; i++) 
        cout<<ans2[i]<<" ";

    return 0;
}