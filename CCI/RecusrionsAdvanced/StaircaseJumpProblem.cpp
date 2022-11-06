#include<bits/stdc++.h>

using namespace std;

//Number of ways to reach Nth Stair with max 3 jumps

int jumps(int n){
    if(n<0)
        return 0;
    if(n==0 || n==1)
        return 1;
    if(n==2)
        return 2;
    return jumps(n-1) + jumps(n-2) + jumps(n-3);
}

int main(){
    int n = 4;
    int ans = jumps(n);
    cout<<ans;
    return 0;
}