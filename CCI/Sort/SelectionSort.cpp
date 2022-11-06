#include<bits/stdc++.h>

using namespace std;

//Selection Sort - Pick the first element, find the smallest element in the remaining part of array
//If first element smaller than smallest element in remaining array then swap
//Else move on to remaining array and begin again

void selectionSort(vector<int> &a){
    for(int i = 0; i<a.size()-1; i++){
        int smallest = i;
        for(int j = i+1; j<a.size(); j++){
            if(a[j]<a[smallest]){
                smallest = j;
            }
        }
        if(a[i]>a[smallest])
            swap(a[i],a[smallest]);
    }
}

int main(){
    vector<int> a = {7,5,3,6,8};
    selectionSort(a);
    for(auto x : a)
        cout<<x<<" ";
    return 0;
}