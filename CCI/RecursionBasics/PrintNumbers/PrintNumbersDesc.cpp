#include<bits/stdc++.h>

using namespace std;

//print the number from n to 1

void print(int n ){
    //Base Case
    if(n==0)
        return;

    //Recursive
    cout<<n<<endl;

    //Calculation
    print(n-1);

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

    print(n);
    
    return 0;
}