#include<bits/stdc++.h>

using namespace std;

int firstOccurence(vector<int>& arr, int target){
    int e = arr.size()-1;
    int s = 0;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==target){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int lastOccurence(vector<int>& arr, int target){
    int e = arr.size()-1;
    int s = 0;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==target){
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    
    vector<int> arr = {1,3,5,5,5,5,6,8,9};

    int first = firstOccurence(arr,5);
    int last = lastOccurence(arr,5);

    cout<<"First and last occurence are at index: "<<first<<" and "<<last;
    
    return 0;
}