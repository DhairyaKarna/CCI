#include<bits/stdc++.h>

using namespace std;

int countZeros(int n){

    //Base Case
    if(n==0)
        return 0;

    //Recursive Step
    int smallOutput = countZeros(n/10);

    //Calculation
    int count = 0;
    if(n%10 == 0) 
        count++;
    return count + smallOutput;

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

    int ans = countZeros(n);

    cout<<ans;

    return 0;
}