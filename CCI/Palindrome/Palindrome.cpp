#include<iostream>
#include<string.h>

using namespace std;

void palindrome(string s){
    int end = s.size()-1;
    int start = 0;
    while(start<=end){
        if(s[start]!=s[end]){
            cout<<"Not a Palindrome";
            return;
        }
        start++;
        end--;
    }
    cout<<"Is a palindrome";
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    string s;
    getline(cin, s);

    palindrome(s);

    return 0;
}