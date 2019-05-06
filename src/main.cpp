#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool getWord(ifstream &ifstream, string &word) {
    word = "";
    string line;

    if(!getline(ifstream, line)) return nullptr;
    int spaceVelue = 0;
    for(char letter : line) {
        if(spaceVelue >= 3) word += letter;
        if (letter == ' ') spaceVelue++;
    }

    return true;
}


int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Russian");

    ifstream file("../res/verbs.txt");

    string word;
    while (getWord(file, word)) {
        cout << word << endl;
    }
    return 0;
}

