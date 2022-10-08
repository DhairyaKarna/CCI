#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int partition(int* a, int p, int r){
    int x = a[r];
    int i = p-1;

    for(int j = p; j<r; j++){
        if(a[j]<=x){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quickSort(int* a, int p, int r){
    if(p<r){
        int q = partition(a,p,r);
        quickSort(a, p, q-1);
        quickSort(a, q+1, r);
    }
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

    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    quickSort(a, 0 , n-1);

    for(int i : a){
        cout<<i<<" ";
    }

    return 0;
}