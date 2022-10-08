#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int w = 0;

void merge(int* a, int l, int mid, int h){

    int i = l;
    int j = mid+1;
    int k = l;
    int x = h-l+1;
    int c[x];
    while(i<=mid && j<=h){
        if(a[i] < a[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=a[j];
            j++;
            k++;
            w += (mid-i+1);
        }
    }
    while(i<=mid){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=h){
        c[k]=a[j];
        j++;
        k++;
    }

    for(int i = l; i <= h; i++)
        a[i]=c[i];
    
}

void mergesort(int* a, int l, int h){
    if(l<h){
        int mid = l + (h-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
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
    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    mergesort(a, 0, n-1);

    cout << w << endl;

    cout << "<<<>>>" << endl;
    for(int i : a){
        cout<<i<<" ";
    }
    cout<<'\n';
    return 0;
}