#include <cstring>
#include <vector>
#include "headers/verbStruct.h"

struct EngVerbs {
    string rusVerb;
    string engVerb[4];
};

bool getStructVerb(ifstream &ifstream, EngVerbs &sVer) {
    EngVerbs *sVerb = new EngVerbs;
    string line;

    if(!getline(ifstream, line)) return false;
    int spaceVelue = 0;
    string word;
    for(char letter : line) {
        if (spaceVelue >= 3) word += letter;
        if (letter == ' ' && spaceVelue<3) {
            sVerb->engVerb[spaceVelue] = word;
            word = "";
            spaceVelue++;
        }
        if(spaceVelue<3)
            if(letter != ' ')
                word+=letter;
    }
    sVerb->rusVerb = word;
    sVer = *sVerb;
    return true;
}

vector<EngVerbs> getList(ifstream &file) {
    vector<EngVerbs> sVerbs;
    EngVerbs sVerb; int i= 0;
    while (getStructVerb(file, sVerb)) {
        sVerbs.push_back(sVerb);
        i++;
    }
    return sVerbs;
}

void menu() {
    ifstream file("../res/verbs.txt");

    vector<EngVerbs> sVerbs= getList(file);

    int size;
    cout << "введите количество проверяемых глаголов: ";
    cin >> size;
    int s = 0;
    int d = 0;
    for (int j = 0; j < size; ++j) {
        int ran = rand() % 100;
        cout << "напишите формы данного глагола (" << sVerbs[ran].rusVerb << "): " << endl;
        int index = 0;
        s = 0;
        while (index < 3) {
            string in;

            cin >> in;
            if (!strcmp(in.c_str(), sVerbs[ran].engVerb[index].c_str())) {
                cout << "правильно." << endl;
                s++;

            }else
                cout << "неправильно " << in << " надо: " << sVerbs[ran].engVerb[index] << "\n";
            index++;
        }
        if (s == 3) d++;
    }
    if (size > 0) {
        int procsent = ((float) d / size) * 100;
        cout << "из " << size << " правильно " << d << ": " << procsent << "%";
    }
}