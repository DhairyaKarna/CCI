#include<bits/stdc++.h>

using namespace std;

//Sum using only array
int sumArray(int a[], int n){

    //Base Case
    if(n==1){
        return a[0];
    }

    //Recursion
    int smallSum = sumArray(a+1,n-1);

    //Calculation
    int sum = a[0]+smallSum;
    return sum;
}

//Sum using Iterator
int sumArray2(int a[], int n, int i){

    //Base Case
    if(i==n){
        return 0;
    }

    //Recursion
    int smallSum = sumArray2(a,n,i+1);

    //Calculation
    int sum = a[i]+smallSum;
    return sum;
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

    int a[n];

    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    int ans = sumArray(a, n);
    int ans2 = sumArray2(a, n, 0);

    cout<<"Ans1 = "<<ans<<endl;
    cout<<"Ans2 = "<<ans2;
    
    return 0;
}