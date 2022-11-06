#include<bits/stdc++.h>

using namespace std;

int towerOfHanoi(int n){
    if(n==1)
        return 1;
//towerOfHanoi(n-1) - from source to middle tower
//1 last block to destination
//towerOfHanoi(n-1) - from middle tower to destination 
    return 2*towerOfHanoi(n-1) + 1;
}

int main(){
    int n = 3;
    int ans = towerOfHanoi(n);
    cout<<ans;
    return 0;
}