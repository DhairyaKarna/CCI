#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(int a[], int start, int end){

    if(start>end)
        return true;

    if(start==end)
        return checkPalindrome(a, start+1, end-1);;
    
    if(a[start]!=a[end])
        return false;
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

    for(int i =0; i<n; i++)
        cin>>a[i];

    bool ans = checkPalindrome(a, 0, n-1);

    if(ans) 
        cout<<"Array is Palindrome";
    else    
        cout<<"Array is not Palindrome";

    return 0;
}