#include<bits/stdc++.h>

using namespace std;

void print(char input[]){
    if(input[0]=='\0')
        return;

    cout<<input[0];
    print(input+1);
}

void reverse_print(char input[]){
    if(input[0]=='\0')
        return;
    
    reverse_print(input+1);
    cout<<input[0];
}

int main(){
    char input[] = "abcdef";
    print(input);
    cout<<endl;
    reverse_print(input);
    return 0;
}