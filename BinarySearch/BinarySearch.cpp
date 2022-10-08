#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int binary(int* a, int l, int h, int v){
    if(l<=h){
        int mid = l + (h-l)/2;
        if (a[mid]==v){
            return mid;
        }
        if(a[mid]>v){
            int y = binary(a, l, mid-1, v);
            return y;
        }
        else if(a[mid]<v){
            int y = binary(a, mid+1, h, v);
            return y;
        }
        else{
            return -1;
        }
    }
    return -1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; 
    cin>>n;

    int a[n];
    for( int i =0; i<n; i++){
        cin>>a[i];
    }

    int value;
    cin>>value;

    int x = binary(a, 0, n-1, value);

    if(x!=-1){
        cout<<"Element found at position = "<<x+1;
    }
    else{
        cout<<"Element not found";
    }

    return 0;
}
