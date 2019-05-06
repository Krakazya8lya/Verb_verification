#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Russian");

    ifstream file("../res/verbs.txt");

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    return 0;
}