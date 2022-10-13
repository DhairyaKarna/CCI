#include<bits/stdc++.h>

using namespace std;

bool isElementPresent(int a[], int n, int v){

    //Base Case
    if(n==1){
        if(a[0]==v)
            return true;
        else
            return false;
    }

    //Calculation
    if(a[0]==v)
        return true;

    //Recursion
    bool isElementPresentInSmallerArray = isElementPresent(a+1, n-1, v);
    return isElementPresentInSmallerArray;
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

    bool ans = isElementPresent(a,n,v);

    if(ans)
        cout<<"Element is Present ";
    else
        cout<<"Element not Present";

    
    return 0;
}