#include<bits/stdc++.h>

using namespace std;

//Keep on comparing an element iwth its right negihbour
//If it is bigger then swap - Do this for whole array
//This will shift the highest number to the last position
//keep on doing the entire provess (size of array -1) times

void bubbleSort(vector<int> &a){
    for(int i = 1; i < a.size() ; i++){
        for(int j = 0; j<a.size()-1 ; j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}

int main(){
    vector<int> a = {7,3,6,8,5,4};
    bubbleSort(a);
    for(auto x : a)
        cout<<x<<" ";
    return 0;
}