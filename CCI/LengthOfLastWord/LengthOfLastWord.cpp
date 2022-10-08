#include <iostream>
#include <string.h>

using namespace std;

int count = 0;

int Lolw(string s){
    int i =0;
    while(i<s.size()){
        if(s[i]!=' ')
            count++;
        else{
            while(i<s.size()){
                if(s[i]==' ')
                    i++;
                else{
                    count = 1;
                    break;
                }
            }
        }
        i++;
    }
    return count;
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    string s;
    getline(cin,s);

    int x = Lolw(s);

    cout<<x;

    return 0;
}