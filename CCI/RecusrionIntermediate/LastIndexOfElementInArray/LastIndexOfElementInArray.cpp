#include<bits/stdc++.h>

using namespace std;

int positionOfLastAppearance(int a[], int n, int v, int i){

    //Base Case
    if(i==0){
        if(a[i]==v) return i;
        else return -1;
    }   

    //Calculation
    if(a[i]==v)
        return i;

    //Recursion
    int position = positionOfLastAppearance(a, n, v, i-1);
    if(position!=-1)
        return position;
    else
        return -1;

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
    for(int i=0; i<n; i++)
        cin>>a[i];

    int v;
    cin>>v;

    int ans = positionOfLastAppearance(a,n,v,n-1);

    if(ans!=-1)
        cout<<"Element present at index = "<<ans;
    else
        cout<<"Element not present";

    return 0;
}