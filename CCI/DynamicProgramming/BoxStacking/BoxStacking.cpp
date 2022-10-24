#include<bits/stdc++.h>

using namespace std;

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

    int arr[n][3];

    for(int i =0; i<n; i++){
        for(int j=0; j<3; j++)
            cin>>arr[i][j];
    }

    

    return 0;
}