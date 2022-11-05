#include<bits/stdc++.h>

using namespace std;

int lenght(char input[]){
    if(input[0]=='\0')
        return 0;
    
    int smallLength = lenght(input+1);
    return smallLength+1;
}

int main(){
    char input[100] ;
    cin>>input;
    int l = lenght(input);
    cout<<l<<endl;
    return 0;
}