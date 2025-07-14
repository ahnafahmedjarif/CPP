#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    cin >> str; // only one word
    cout << "Entered: " << str << endl;

    string line;
    getline(cin >> ws, line); // read full lines
    cout << "Full line: " << line << endl;

    cout << str[0] << " " << str[1];
    
    return 0;
}