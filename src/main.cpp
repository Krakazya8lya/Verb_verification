#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct EngVerbs {
    string rusVerb;
    string engVerb[4];
} sVerbs[100];

bool getStructVerb(ifstream &ifstream, EngVerbs &sVer) {
    EngVerbs *sVerb = new EngVerbs;
    string line;

    if(!getline(ifstream, line)) return nullptr;
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
        word+=letter;
    }
    sVerb->rusVerb = word;
    sVer = *sVerb;
    return true;
}


int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Russian");


    ifstream file("../res/verbs.txt");

    EngVerbs sVerb; int i= 0;
    while (getStructVerb(file, sVerb)) {
        sVerbs[i].rusVerb = sVerb.rusVerb;
        sVerbs[i].engVerb[0] = sVerb.engVerb[0];
        sVerbs[i].engVerb[1] = sVerb.engVerb[1];
        sVerbs[i].engVerb[2] = sVerb.engVerb[2];
        sVerbs[i].engVerb[3] = sVerb.engVerb[3];
        i++;
    }
    return 0;
}

