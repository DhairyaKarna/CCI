#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//BottomUp
int BoxStacking(vector<vector<int>>& arr, int n){

    vector<int> dp(n,-1);

    dp[0]=arr[0][2];
    //int len = 0;

    for(int i =1; i<n; i++){
        if(arr[i][0]>=arr[i-1][0] && arr[i][1]>=arr[i-1][1] && arr[i][2]>=arr[i-1][2]){
            dp[i] = arr[i][2] + dp[i-1];
        }
        else
            dp[i] = dp[i-1];
    }

    return dp[n-1];
}

//Video Approach

bool compareBoxes(vector<int> b1, vector<int> b2){
    return b1[2]<b2[2];
}

bool canPlace(vector<int> b1, vector<int> b2){
    if(b1[0]< b2[0] and b1[1]< b2[1] and b1[2]< b2[2])
        return true;
    return false;
}

int boxStacking1(vector<vector<int>> arr, int n){

    //Sort on the basis of height
    sort(arr.begin(),arr.end(),compareBoxes);

    //DP
    vector<int> dp(n+1,0);

    for(int i=0; i<n; i++){
        dp[i] = arr[i][2]; //height of ith box
    }

    for(int i =1; i<n; i++){
        //Check all boxes with index less than i
        for(int j = 0; j<i; j++){
            if(canPlace(arr[j],arr[i])){
                int currentHeight = arr[i][2];

                if(dp[j]+currentHeight > dp[i])
                    dp[i] = dp[j] + currentHeight;
            }
        }
    }

    int max_height = 0;
    for(int i : dp){
        max_height = max(i,max_height);
    }
    return max_height;
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

    vector<vector<int>> arr;

    for(int i =0; i<n; i++){
        vector<int> input;
        for(int j=0; j<3; j++){
            int m;
            cin>>m;
            input.push_back(m);
        }
        arr.push_back(input);
    }

    int ans = BoxStacking(arr, n);

    cout<<"Max Possible Height of Boxes: "<<ans<<endl;

    int ans1 = boxStacking1(arr, n);

    cout<<"Max Possible Height of Boxes by Video: "<<ans1;

    return 0;
}