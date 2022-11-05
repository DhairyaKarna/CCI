#include<bits/stdc++.h>

//Remove a given character from a character array

using namespace std;

int lenght(char input[]){
    if(input[0]=='\0')
        return 0;
    
    int smallLength = lenght(input+1);
    return smallLength+1;
}

void remove(char input[], char a){
    if(input[0]=='\0')
        return;
    if(input[0]!=a)
        remove(input+1,a);
    else{
        for(int i =0; input[i]!='\0';i++){
            input[i] = input[i+1];
        }
        remove(input,a);
    }
}

int main(){
    char input[] = "abcdefgabc";
    char a = 'a';
    cout<<input<<endl;
    cout<<lenght(input)<<endl;
    remove(input, a);
    cout<<input<<endl;
    cout<<lenght(input)<<endl;
    return 0;
}