#include <iostream>
#include <string>
using namespace std;

int main(){

    string word = "hello";

    cout << word.size() << endl; // Get length of string ---> 5
    cout << word.empty() << endl; // Check if it's empty ---> false
    cout << word.substr(1, 3) << endl; // Substring starting from index 1, length 3 --> "ell"
    cout << word.find('lo') << endl; // Returns index of first "lo" ---> 3
    word.push_back('!'); // Adds '!' at end ---> "hello!"
    word.pop_back(); // Removes last character ---> ""hell" if before was "hello""

    return 0;
    
}   