#include<bits/stdc++.h>

//Replace all charcater in a string with another character

using namespace std;

void replace(char input[], char a, char r){
    if(input[0]=='\0')
        return;
    if(input[0]==a)
        input[0]=r;
    replace(input+1,a,r);
}


int main(){
    char a = 'a';
    char r = 'x';
    char input[] = "abcdegfa";
    replace(input, a, r);
    cout<<input<<endl;
    return 0;
}