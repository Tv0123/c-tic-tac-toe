#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

using namespace std;

bool start = false;
bool win = false;

string xPos;
string oPos;

std::string rowOne[3] = {"[ ]", "[ ]", "[ ]"};
std::string rowTwo[3] = {"[ ]", "[ ]", "[ ]"};
std::string rowThree[3] = {"[ ]", "[ ]", "[ ]"};
