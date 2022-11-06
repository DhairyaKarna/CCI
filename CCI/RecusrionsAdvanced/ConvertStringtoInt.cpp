#include<bits/stdc++.h>

using namespace std;

int string_to_int(string s){
    if(s.size()==0)
        return 0;
    int smallAns = string_to_int(s.substr(0,s.size()-1));
    int lastDigit = s[s.size()-1]-'0';
    return smallAns*10 + lastDigit;
}

int main(){

    string s = "12354611";
    int n = string_to_int(s);
    cout<<n;
    return 0;
}