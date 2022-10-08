#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<int> arr;
    int j=0;
    for(int i =0; i<n; i++){
        cin>>j;
        arr.push_back(j);
    }
    for(int i = 1; i<arr.size(); i++){
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int m : arr){
        cout<<m<<" ";
    }
    return 0;
}