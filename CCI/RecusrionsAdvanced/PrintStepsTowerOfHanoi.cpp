#include<bits/stdc++.h>

using namespace std;

int towerOfHanoi(int n){
    if(n==1)
        return 1;
//towerOfHanoi(n-1) - from source to middle tower
//1 last block to destination
//towerOfHanoi(n-1) - from middle tower to destination 
    return towerOfHanoi(n-1) + 1 + towerOfHanoi(n-1);
}

void printSteps(int n, char s, char d, char m){
    if(n==0)
        return;
    //For first step, destination is middle tower
    printSteps(n-1, s, m, d);
    //Moving last disk to destination
    cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
    //For last step, middle tower is source
    printSteps(n-1, m, d, s);
}


int main(){
    int n = 4;
    int ans = towerOfHanoi(n);
    cout<<ans<<endl;
    //S - Source, D - Destination, M - Middle
    printSteps(n, 'S','D','M');
    return 0;
}