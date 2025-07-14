#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    c = towlower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    } 

    return false;
    
}

int main(){

    string str;
    getline(cin, str);

    int cnt_vowel = 0;
    int cnt_consonant = 0;
    for (char c: str){
        if (isalpha(c)){
            if (isVowel(c)){
                cnt_vowel++;
            } else {
                cnt_consonant++;
            }
        }
    }

    cout << "Number of Vowels: " << cnt_vowel << endl;
    cout << "Number of consonant: " << cnt_consonant << endl;

    return 0;
}