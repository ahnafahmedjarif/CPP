#include <bits/stdc++.h>
using namespace std;


bool isAnagrams(string str1, string str2){
    if (str1.length() != str2.length()){
        return false;
    }

    int freq1[26] = {0}; 
    int freq2[26] = {0};

    for (auto c: str1){
        freq1[c - 'a']++;
    }

    for (auto c: str2){
        freq2[c - 'a']++;
    }

    for (int i=0; i < 26; i++){
        if (freq1[i] != freq2[i]){
            return false;
        }
    }

    return true;
}

int main(){

    string str1, str2;
    cin >> str1 >> str2;

    if (isAnagrams(str1, str2)) cout << "Anargrams\n";
    else cout << "Not anargrams\n";
    
    return 0;
}