#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

//Ignore special characters and spaces in the string
//Only consider alphabets and numbers

void specialPalindrome(string s){
    int end = s.size()-1;
    int start = 0;
    while(start<=end){

        //Ignoring spaces and special characters
        while(start<end && !isalnum(s[start])) start++;
        while(start<end && !isalnum(s[end])) end--;

        if(toupper(s[start])!=toupper(s[end])){
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

    specialPalindrome(s);

    return 0;
}