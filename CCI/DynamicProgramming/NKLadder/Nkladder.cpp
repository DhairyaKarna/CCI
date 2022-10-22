#include<bits/stdc++.h>

using namespace std;

//TopDown
int NKtopdown(int n, int k, int* m){
    if(k<=0)
        return 0;
    else if(n==0 || n==1)
        return 1;
    else if(m[n]!=0)
        return m[n];
    else{
        for(int i = n-1; (i>=n-k && i>=0) ; i--){
            m[n] += NKtopdown(i,k,m);
        }
        return m[n];
    }
}

//BottomUp
int NKBottumUp(int n, int k, int* m){
    if(k<=0)
        return 0;
    else{
        m[0]=1;
        m[1]=1;
        if(n==0 || n==1)
            return 1;
        for(int i = 2; i<=n; i++){
            for(int j = i-1; j<=i-k && j>=0; j--){
                m[i] += m[j];
            }
        }
        return m[n];
    }
}

//BottumUp Optimized
int NKBottomUpOpt(int n, int k, int* m){
    if(k<=0)
        return 0;
    else{
        m[0]=1;
        m[1]=1;
        if(n==0 || n==1)
            return 1;
        for(int i = 2; i<=n; i++){
            if(i-k-1>=0)
                m[i] = 2*m[i-1] - m[i-k-1];
            else{
                for(int j = i-1; j<=i-k && j>=0; j--){
                    m[i] += m[j];
                }
            }
        }
        return m[n];
    }
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
    int k;
    cin>>n;
    cin>>k;

    int m[n+1] = {0};

    int ans1 = NKtopdown(n,k,m);

    cout<<"Top Down Answer: "<<ans1<<endl;

    int ans2 = NKBottumUp(n,k,m);

    cout<<"Bottom Up Answer: "<<ans2<<endl;

    int ans3 = NKBottomUpOpt(n,k,m);

    cout<<"Bottom Up Optimized Answer: "<<ans3;

    return 0;    
}