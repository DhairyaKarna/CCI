#include<bits/stdc++.h>

using namespace std;

//Check first and second Element 
bool isSorted(int a[], int n){
    
    //Base Case
    if(n==0||n==1){
        return true;
    }

    //Calculation
    if(a[0]>a[1]){
        return false;
    }

    //Recursion
    bool isSmallerArraySorted = isSorted(a+1,n-1);

    /* if(isSmallerArraySorted)
         return true;
       else    
         return false; */

    //Similar to one above
    return isSmallerArraySorted;
}

//Check Last and second last element
bool isSorted2(int a[], int n){
    
    //Base Case
    if(n==0||n==1){
        return true;
    }

    //Calculation
    if(a[n-2]>a[n-1]){
        return false;
    }

    //Recursion
    bool isSmallerArraySorted = isSorted(a,n-1);
    
    return isSmallerArraySorted;
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

    bool ans = isSorted(a,n);
    bool ans2 = isSorted2(a,n);

    if(ans)
        cout<<"Ans1 = Sorted"<<endl;
    else    
        cout<<"Ans1 = Not Sorted"<<endl;

    if(ans2)
        cout<<"Ans2 = Sorted"<<endl;
    else    
        cout<<"Ans2 = Not Sorted"<<endl;
    
    return 0;
}