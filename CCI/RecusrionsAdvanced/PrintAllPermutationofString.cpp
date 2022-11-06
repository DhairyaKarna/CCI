#include<bits/stdc++.h>

using namespace std;

//Length of String = 3
//Number of Permutation = 3! = 6
//Eg ABC = ABC, ACB, BAC, BCA, CAB, CBA

void permutate(char str[], int i){
    if(str[i]=='\0'){
        cout<<str<<endl;
        return;
    }
    for(int j = i; str[j]!='\0'; j++){
        swap(str[i],str[j]);
        permutate(str, i+1);
        //Since string are passed by refernce we need to revert back to original
        //ABC is swapped to BAC, then next call should go CBA
        //if not swapped it will swap on BAC rather than ABC
        swap(str[j],str[i]);
    }
}

int main(){
    char s[] = "ABCD";
    permutate(s, 0);
    return 0;
}