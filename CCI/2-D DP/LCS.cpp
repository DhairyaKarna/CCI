#include<bits/stdc++.h>

using namespace std;

//LCS = Longest Common Substring between 2 strings 

int lcs(string s1, string s2, int i, int j){
    if(i==s1.length() or j==s2.length())
        return 0;
    
    if(s1[i]==s2[j]){
        return 1 + lcs(s1,s2,i+1,j+1);
    }
    else{
        int option1 = lcs(s1,s2,i+1,j);
        int option2 = lcs(s1,s2,i,j+1);
        return max(option1, option2);
    }
}

int lcsTD(string s1, string s2, int i, int j, vector<vector<int> >& dp){
    if(i==s1.length() or j==s2.length())
        return 0;

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    if(s1[i]==s2[j]){
        return dp[i][j] = 1 + lcs(s1,s2,i+1,j+1);
    }
    else{
        int option1 = lcsTD(s1,s2,i+1,j,dp);
        int option2 = lcsTD(s1,s2,i,j+1,dp);
        return dp[i][j] = max(option1, option2);
    }
}

int lcsBD(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();

    vector<vector<int> > dp(n1+1, vector<int>(n2+1,0));

    for(int i =1; i<n1+1; i++){
        for(int j=1; j<n2+1; j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                int op1 = dp[i-1][j];
                int op2 = dp[i][j-1];
                dp[i][j] = max(op1,op2);
            }
        }
    }

    //Printing the LCS
    vector<char> result;
    int i =n1, j=n2;
    while(i!=0 or j!=0){
        if(dp[i][j]==dp[i][j-1])
            j--;
        else if(dp[i][j]==dp[i-1][j])
            i--;
        else{
            result.push_back(s1[i-1]);
            i--;
            j--;
        }
    }
    reverse(result.begin(),result.end());
    for(auto c : result)
        cout<<c<<" ";

    return dp[n1][n2];
}


int main(){
    string s1 = "ABCDFG";
    string s2 = "ABDEG";
    int answer = lcs(s1,s2,0,0);
    cout<<answer<<endl;
    int n1 = s1.length();
    int n2 = s2.length();
    vector<vector<int> > dp(n1,vector<int>(n2,-1));
    int answer2 = lcsTD(s1,s2,0,0,dp);
    cout<<answer2<<endl;
    int answer3 = lcsBD(s1,s2);
    cout<<answer3<<endl;
    return 0;
}