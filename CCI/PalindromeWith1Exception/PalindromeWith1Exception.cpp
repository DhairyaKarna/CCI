#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

//Check if string is palindrome, allowed to delete at max one character anywhere in the string

//checks whether the given case is correct or not
bool check(string s, int start, int end){
    while(start<=end){
        if(s[start]!=s[end])
            return false;
        start++;
        end--;
    }
    return true;
}


//basic Palindrome with check function
void checkDeletablePalindrome(string s){
    int end = s.size()-1;
    int start = 0;
    while(start<=end){

        if(s[start]!=s[end]){
            //2 cases
            //delete start and check for start+1 till end
            //delete end and check from start till end-1
            if(check(s, start+1,end)){
                cout<<"Is a palindrome";
                return;
            }
            else if (check(s, start,end-1)){
                cout<<"Is a palindrome";
                return;
            }
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

    checkDeletablePalindrome(s);

    return 0;
}