//
// Created by Dmitry Kulshin on 2019-09-05.
//

#ifndef UNTITLED_VERBSTRUCT_H
#define UNTITLED_VERBSTRUCT_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct EngVerbs;

bool getStructVerb(ifstream &ifstream, EngVerbs &sVer);

vector<EngVerbs> getList(ifstream &file);

void menu();

#endif //UNTITLED_VERBSTRUCT_H
