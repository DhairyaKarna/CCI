#include<bits/stdc++.h>

using namespace std;

//Given a number k, find the sum 1+(1/2)+(1/2^2)+.....(1/2^k)

double geometricSum(int k){

    //Base Case
    if(k==0)
        return 1;

    //Recursive Step
    double smallOutput = geometricSum(k-1);

    //Calucation
    double term = 1/pow(2,k);
    return smallOutput + term;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int k;
    cin>>k;

    double ans = geometricSum(k);

    cout<<ans;

    return 0;
}