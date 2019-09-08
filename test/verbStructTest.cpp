#include <cstring>
#include <vector>
#include "verbStructTest.h"
#include <cassert>
#include "../src/headers/verbStruct.h"

struct EngVerbs {
    string rusVerb;
    string engVerb[4];
};

void testCheckContentRus() {
    ifstream file("../res/verbs.txt");

    vector<EngVerbs> sVerbs = getList(file);


    assert(!sVerbs[rand() % 100].rusVerb.empty());
}
void testCheckContentEngOne() {
    ifstream file("../res/verbs.txt");

    vector<EngVerbs> sVerbs = getList(file);

    assert(!sVerbs[rand() % 100].engVerb[0].empty());
}

void testCheckContentEngTho() {
    ifstream file("../res/verbs.txt");

    vector<EngVerbs> sVerbs = getList(file);

    assert(!sVerbs[rand() % 100].engVerb[1].empty());
}

void testCheckContentEngThree() {
    ifstream file("../res/verbs.txt");

    vector<EngVerbs> sVerbs = getList(file);

    assert(!sVerbs[rand() % 100].engVerb[2].empty());
}