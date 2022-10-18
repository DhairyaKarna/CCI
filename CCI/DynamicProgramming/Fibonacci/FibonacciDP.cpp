#include<bits/stdc++.h>

using namespace std;

//Memoization Approach
double fibonacci(int n, double* memo){
    if(memo[n]!=0){
        return memo[n];
    }
    if(n==1 || n==2){
        return 1;
    }
    else{
        double result = fibonacci(n-1, memo) + fibonacci(n-2,memo);
        memo[n] = result;
        return result;
    }
}

//Bottom-up Approach
double fibonacci_bottomup(int n){
    if (n==1 || n==2)
        return 1;

    double bottomUp[n+1];
    bottomUp[1] = 1;
    bottomUp[2] = 1;
    for(int i = 3; i<n+1; i++){
        bottomUp[i] = bottomUp[i-1] + bottomUp[i-2];
    }
    return bottomUp[n];
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

    double memo[n+1] = {0};
  
    double ans = fibonacci(n, memo);
    double ans2 = fibonacci_bottomup(n);

    cout<<"Ans with Memoization: "<<ans<<endl;
    cout<<"Ans with Bottom-Up: "<<ans2<<endl;

    return 0;
}