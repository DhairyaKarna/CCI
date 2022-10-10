#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

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

    vector<string> ans;

    for(int i =1; i< n+1; i++){
        if(i%3==0 && i%5==0)
            ans.push_back("FizzBuzz");
        else if (i%3==0)
            ans.push_back("Fizz");
        else if (i%5==0)
            ans.push_back("Buzz");
        else{
            ans.push_back(to_string(i));
        }
    }

    for(string s : ans)
        cout<<s<<endl;

    return 0;
}