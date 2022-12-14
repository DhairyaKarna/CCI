#include<bits/stdc++.h>

using namespace std;

//Checking through Iterator from n-1 to 1
int positionOfLastAppearance(int a[], int n, int v, int i){

    //Base Case
    if(i==0){
        if(a[i]==v) return i;
        else return -1;
    }   

    //Calculation
    if(a[i]==v)
        return i;

    //Recursion
    int position = positionOfLastAppearance(a, n, v, i-1);
    if(position!=-1)
        return position;
    else
        return -1;

}

//Checking without iterator by reducing size of element
int positionOfLastAppearance2(int a[], int n, int v){

    //Base Case
    if(n==0){
        if(a[n]==v) return n;
        else return -1;
    }   

    //Calculation
    if(a[n]==v)
        return n;

    //Recursion
    int position = positionOfLastAppearance2(a, n-1, v);
    if(position!=-1)
        return position;
    else
        return -1;

}

//Checking through Iterator by going from 0 to n
int positionOfLastAppearance3(int a[], int n, int v, int i){

    //Base Case
    if(i==n){
        return -1;
    }   

    //Recursion
    int position = positionOfLastAppearance3(a, n, v, i+1);

    //Calculation
    if(position==-1){
        if(a[i]==v)
            return i;
        else
            return -1;
    }
    else
        return position;

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
    for(int i=0; i<n; i++)
        cin>>a[i];

    int v;
    cin>>v;

    int ans = positionOfLastAppearance(a,n,v,n-1);
    int ans2 = positionOfLastAppearance2(a,n,v);
    int ans3 = positionOfLastAppearance3(a,n,v,0);

    if(ans!=-1)
        cout<<"Element present at index by Ans1 = "<<ans<<endl;
    else
        cout<<"Element not present by Ans1"<<endl;

    if(ans2!=-1)
        cout<<"Element present at index by Ans2 = "<<ans2<<endl;
    else
        cout<<"Element not present by Ans2"<<endl;

    if(ans!=-1)
        cout<<"Element present at index by Ans3 = "<<ans3;
    else
        cout<<"Element not present by Ans3";

    return 0;
}