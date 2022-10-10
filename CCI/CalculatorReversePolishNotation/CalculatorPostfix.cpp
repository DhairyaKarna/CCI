#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    vector<string> str;
    string s;
    while(cin>>s){
        str.push_back(s);
    }

    stack<int> st;

    for(int i =0; i<str.size(); i++){
        if(str[i]=="+" || str[i]=="-" || str[i]=="*" || str[i]=="/"){
            //2 numbers from top of stack
            int v1 = st.top();
            st.pop();
            int v2 = st.top();
            st.pop();

            if(str[i]=="+"){
                st.push(v2+v1);
            }
            else if(str[i]=="-"){
                st.push(v2-v1);
            }
            else if(str[i]=="*"){
                st.push(v2*v1);
            }
            else if(str[i]=="/"){
                st.push(v2/v1);
            }
        }
        else{
            //Adding Operands (Numbers) to stack
            int v1 = atoi(str[i].c_str());
            st.push(v1);
        }
    }

    cout<<st.top();

    return 0;
}