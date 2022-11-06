#include<bits/stdc++.h>

using namespace std;

//Number of Subsequence in a string is 2^N, n = length of string
//This is because every character has 2 choice, include or exclude
//string = "abc" -> "", a ,b ,c, ab, bc, ca, abc
//Refer to PrintAllSubsequences.jpg for reference

void store_subs(string input, string output, vector<string> &v){
    if(input.size()==0){
        v.push_back(output);
        return;
    }        
    //Exclude choice
    store_subs(input.substr(1),output,v);
    //Include choice
    store_subs(input.substr(1), output+input[0],v);
}

int main(){
    string input;
    cin>>input;
    vector<string> v;
    string output = "";
    store_subs(input,output, v);
    for(auto x : v)
        cout<<x<<endl;
    return 0;
}