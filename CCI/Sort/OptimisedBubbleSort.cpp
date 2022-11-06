#include<bits/stdc++.h>

using namespace std;

//Optimization - if no swapping takes place then array is already sorted
//Check if swap takes place even once and if no the no need to run the loop again

void optimizedBubbleSort(int a[], int n){
    for(int i = 1; i < n ; i++){
        int flag = 0;
        for(int j = 0; j<n-1 ; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag = 1;
            }
        }
        if(flag==0)
            break;
    }
}

int main(){

    int n = 5;
    int a[n] = {3,4,5,1,8};
    optimizedBubbleSort(a,n);
    for(auto x :  a)
        cout<<x<<" ";
    return 0;
}