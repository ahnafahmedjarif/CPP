#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    } else {
        return false;
    }
    
}

int main(){

    string str;
    cin >> str;

    int cnt_vowel = 0;

    for (auto c: str){
        if (isalpha(c)){
            if (isvowel(c)){
                cnt_vowel++;
            }
        }
    }

    if (cnt_vowel == str.size()){
        cout << "True\n";
    } else {
        cout << "False\n";
    }
    
    return 0;
}