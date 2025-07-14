#include <bits/stdc++.h>
using namespace std;

int main(){

    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    vector<string> words;
    string word = "";

    for (int i=0; i<sentence.size(); i++){
        if (sentence[i] != ' '){
            word += sentence[i];
        } else {
            if (word != ""){
                words.push_back(word);
                word = "";
            }
        }
    }

    if (word != ""){
        words.push_back(word);
    }

    cout << "Reversed Sentence: ";
    for (int i=words.size()-1; i>=0; i--){
        cout << words[i];
        if (i != 0) cout << " ";
    }

    cout << endl;
    
    return 0;
}