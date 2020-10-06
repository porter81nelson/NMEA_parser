//
// Created by porter on 10/3/20.
//
#include "check_input.h"
#include <iostream>
#include <string>
using namespace std;

bool CheckInput(string input) {
    stringstream s_stream(input);
    string sub_string;
    string sub_string2;

    sub_string = input.substr(0,3);
    sub_string2 = input.substr(3,3);
    if (sub_string != "$GP") {
        return false;
    }
    else if (sub_string2 == "RMC") {
        return true;
    }
    else if (sub_string2 == "GGA") {
        return true;
    }
    else if (sub_string2 == "VTG") {
        return true;
    }
    else if (sub_string2 == "GSA") {
        return true;
    }
    else {
        return false;
    }

}


