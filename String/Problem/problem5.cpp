#include <bits/stdc++.h>
using namespace std;

int main(){

    string sentence;
    getline(cin, sentence);

    vector<string> words;
    string word = "";
    
    for (int i=0; i<sentence.length(); i++){
        if (sentence[i] != ' '){
            word += sentence[i];
        } else{
            if (word != ""){
                words.push_back(word);
                word = "";
            }
        }
    }

    if (word != "") words.push_back(word);

    for (int i=0; i<words.size(); i++){
        int left = 0, right = words[i].size();

        while (left < right){
            swap(words[left], words[right]);
            left++;
            right--;
        }
    }

    for (auto ch: words){
        cout << ch;
    }
    
    cout << endl;
    
    return 0;
}