#include<bits/stdc++.h>

using namespace std;

//any element that appears more than n/2 times in an array

// 4 ways to do this
// Brute force - Count frequency of  each element - O(n2)
// Hashmap - Create a hashmap of frequency for each element - O(n) , Space - O(n)
// Sorting - Sort and check - O(nlgn)


// Moore's Voting Approach - Iterate once thru the array
// Assume first element to be the majority element with count 1
    // If difference of majority element with next element is not zero
    // decrease the count else increase the count
// If the count becomes zero change the majority element to the current element with count 1

// At the end of iteration the number in majority element is the element present >n/2 times in array
// Time - O(n), Space - O(1)

int mooresVoting(vector<int> a){
    int count = 1;
    int candidate_element = a[0];
    for(int i = 1; i<a.size(); i++){
        if(candidate_element == a[i])
            count++;
        else{
            count--;
            if(count==0){
                candidate_element = a[i];
                count = 1;
            }
        }
    }

    // We can't assume that candidate_element is the majority_element
    int count2 = 0;
    for(auto x : a){
        if(x==candidate_element)
            count2++;
    }
    if(count2>(a.size()/2))
        return candidate_element;
    else 
        return -1;
}


int main(){
    vector<int> a = {4,4,7,8,4,4,4,2,1};
    int ans = mooresVoting(a);
    if(ans!=-1)
        cout<<"Majority Element: "<<ans;
    else
        cout<<"No majority element";
    return 0;
}