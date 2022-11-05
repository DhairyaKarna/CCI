#include<bits/stdc++.h>

using namespace std;

int lenght(char input[]){
    if(input[0]=='\0')
        return 0;
    
    int smallLength = lenght(input+1);
    return smallLength+1;
}

void remove(char input[]){
    if(input[0]=='\0')
        return;
    
    if(input[0]!=input[1])
        remove(input+1);

    else{
        for(int i =0;input[i]!=input[i+1], input[i]!='\0'; i++){
            input[i] = input[i+1];
        }
        remove(input);
        /*
        for(int i =0;input[i]!='\0'; i++){
            input[i] = input[i+1];
        }
        remove(input);
        This will lead to more recursion, while the above code will
        find a duplicate and remove all until no consecutive left
        Then it will call the recursion
        */
    }
}

int main(){
    char input[] = "aabbbcdda";
    cout<<input<<endl;
    cout<<lenght(input)<<endl;
    remove(input);
    cout<<input<<endl;
    cout<<lenght(input)<<endl;
    return 0;
}