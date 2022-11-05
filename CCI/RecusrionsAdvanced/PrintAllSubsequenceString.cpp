#include<bits/stdc++.h>

using namespace std;

//Number of Subsequence in a string is 2^N, n = length of string
//This is because every character has 2 choice, include or exclude
//string = "abc" -> "", a ,b ,c, ab, bc, ca, abc
//Refer to PrintAllSubsequences.jpg for reference

void print_subs(string input, string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }        
    //Exclude choice
    print_subs(input.substr(1),output);
    //Include choice
    print_subs(input.substr(1), output+input[0]);
}

int main(){
    string input;
    cin>>input;
    string output = "";
    print_subs(input,output);
    return 0;
}